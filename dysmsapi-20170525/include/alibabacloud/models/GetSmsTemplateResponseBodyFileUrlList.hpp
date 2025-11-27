// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYFILEURLLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYFILEURLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsTemplateResponseBodyFileUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateResponseBodyFileUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateResponseBodyFileUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    GetSmsTemplateResponseBodyFileUrlList() = default ;
    GetSmsTemplateResponseBodyFileUrlList(const GetSmsTemplateResponseBodyFileUrlList &) = default ;
    GetSmsTemplateResponseBodyFileUrlList(GetSmsTemplateResponseBodyFileUrlList &&) = default ;
    GetSmsTemplateResponseBodyFileUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateResponseBodyFileUrlList() = default ;
    GetSmsTemplateResponseBodyFileUrlList& operator=(const GetSmsTemplateResponseBodyFileUrlList &) = default ;
    GetSmsTemplateResponseBodyFileUrlList& operator=(GetSmsTemplateResponseBodyFileUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline const vector<string> & fileUrl() const { DARABONBA_PTR_GET_CONST(fileUrl_, vector<string>) };
    inline vector<string> fileUrl() { DARABONBA_PTR_GET(fileUrl_, vector<string>) };
    inline GetSmsTemplateResponseBodyFileUrlList& setFileUrl(const vector<string> & fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };
    inline GetSmsTemplateResponseBodyFileUrlList& setFileUrl(vector<string> && fileUrl) { DARABONBA_PTR_SET_RVALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<vector<string>> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
