// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYMOREDATAFILEURLLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYMOREDATAFILEURLLIST_HPP_
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
  class GetSmsTemplateResponseBodyMoreDataFileUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateResponseBodyMoreDataFileUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(MoreDataFileUrl, moreDataFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateResponseBodyMoreDataFileUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(MoreDataFileUrl, moreDataFileUrl_);
    };
    GetSmsTemplateResponseBodyMoreDataFileUrlList() = default ;
    GetSmsTemplateResponseBodyMoreDataFileUrlList(const GetSmsTemplateResponseBodyMoreDataFileUrlList &) = default ;
    GetSmsTemplateResponseBodyMoreDataFileUrlList(GetSmsTemplateResponseBodyMoreDataFileUrlList &&) = default ;
    GetSmsTemplateResponseBodyMoreDataFileUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateResponseBodyMoreDataFileUrlList() = default ;
    GetSmsTemplateResponseBodyMoreDataFileUrlList& operator=(const GetSmsTemplateResponseBodyMoreDataFileUrlList &) = default ;
    GetSmsTemplateResponseBodyMoreDataFileUrlList& operator=(GetSmsTemplateResponseBodyMoreDataFileUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moreDataFileUrl_ != nullptr; };
    // moreDataFileUrl Field Functions 
    bool hasMoreDataFileUrl() const { return this->moreDataFileUrl_ != nullptr;};
    void deleteMoreDataFileUrl() { this->moreDataFileUrl_ = nullptr;};
    inline const vector<string> & moreDataFileUrl() const { DARABONBA_PTR_GET_CONST(moreDataFileUrl_, vector<string>) };
    inline vector<string> moreDataFileUrl() { DARABONBA_PTR_GET(moreDataFileUrl_, vector<string>) };
    inline GetSmsTemplateResponseBodyMoreDataFileUrlList& setMoreDataFileUrl(const vector<string> & moreDataFileUrl) { DARABONBA_PTR_SET_VALUE(moreDataFileUrl_, moreDataFileUrl) };
    inline GetSmsTemplateResponseBodyMoreDataFileUrlList& setMoreDataFileUrl(vector<string> && moreDataFileUrl) { DARABONBA_PTR_SET_RVALUE(moreDataFileUrl_, moreDataFileUrl) };


  protected:
    std::shared_ptr<vector<string>> moreDataFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
