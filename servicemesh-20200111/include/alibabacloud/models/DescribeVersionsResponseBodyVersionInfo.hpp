// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONSRESPONSEBODYVERSIONINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONSRESPONSEBODYVERSIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVersionsResponseBodyVersionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionsResponseBodyVersionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionsResponseBodyVersionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    DescribeVersionsResponseBodyVersionInfo() = default ;
    DescribeVersionsResponseBodyVersionInfo(const DescribeVersionsResponseBodyVersionInfo &) = default ;
    DescribeVersionsResponseBodyVersionInfo(DescribeVersionsResponseBodyVersionInfo &&) = default ;
    DescribeVersionsResponseBodyVersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionsResponseBodyVersionInfo() = default ;
    DescribeVersionsResponseBodyVersionInfo& operator=(const DescribeVersionsResponseBodyVersionInfo &) = default ;
    DescribeVersionsResponseBodyVersionInfo& operator=(DescribeVersionsResponseBodyVersionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && return this->versions_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeVersionsResponseBodyVersionInfo& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline DescribeVersionsResponseBodyVersionInfo& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline DescribeVersionsResponseBodyVersionInfo& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The edition of the ASM instance. Valid values:
    // 
    // *   `Default`: Standard Edition
    // *   `Pro`: Professional Edition that is commercially released
    std::shared_ptr<string> edition_ = nullptr;
    // The list of ASM versions available for the ASM instance of the current edition.
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
