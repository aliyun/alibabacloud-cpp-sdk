// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#define ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetSearchCodePreviewResponseBodyResultHighlightTextMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSearchCodePreviewResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_TO_JSON(clob, clob_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSearchCodePreviewResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_FROM_JSON(clob, clob_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    GetSearchCodePreviewResponseBodyResultHighlightTextMap() = default ;
    GetSearchCodePreviewResponseBodyResultHighlightTextMap(const GetSearchCodePreviewResponseBodyResultHighlightTextMap &) = default ;
    GetSearchCodePreviewResponseBodyResultHighlightTextMap(GetSearchCodePreviewResponseBodyResultHighlightTextMap &&) = default ;
    GetSearchCodePreviewResponseBodyResultHighlightTextMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSearchCodePreviewResponseBodyResultHighlightTextMap() = default ;
    GetSearchCodePreviewResponseBodyResultHighlightTextMap& operator=(const GetSearchCodePreviewResponseBodyResultHighlightTextMap &) = default ;
    GetSearchCodePreviewResponseBodyResultHighlightTextMap& operator=(GetSearchCodePreviewResponseBodyResultHighlightTextMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clob_ == nullptr
        && return this->fileName_ == nullptr && return this->organizationId_ == nullptr; };
    // clob Field Functions 
    bool hasClob() const { return this->clob_ != nullptr;};
    void deleteClob() { this->clob_ = nullptr;};
    inline string clob() const { DARABONBA_PTR_GET_DEFAULT(clob_, "") };
    inline GetSearchCodePreviewResponseBodyResultHighlightTextMap& setClob(string clob) { DARABONBA_PTR_SET_VALUE(clob_, clob) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetSearchCodePreviewResponseBodyResultHighlightTextMap& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetSearchCodePreviewResponseBodyResultHighlightTextMap& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> clob_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
