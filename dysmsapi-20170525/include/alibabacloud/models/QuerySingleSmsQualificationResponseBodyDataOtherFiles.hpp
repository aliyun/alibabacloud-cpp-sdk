// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATAOTHERFILES_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATAOTHERFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySingleSmsQualificationResponseBodyDataOtherFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleSmsQualificationResponseBodyDataOtherFiles& obj) { 
      DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleSmsQualificationResponseBodyDataOtherFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
    };
    QuerySingleSmsQualificationResponseBodyDataOtherFiles() = default ;
    QuerySingleSmsQualificationResponseBodyDataOtherFiles(const QuerySingleSmsQualificationResponseBodyDataOtherFiles &) = default ;
    QuerySingleSmsQualificationResponseBodyDataOtherFiles(QuerySingleSmsQualificationResponseBodyDataOtherFiles &&) = default ;
    QuerySingleSmsQualificationResponseBodyDataOtherFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleSmsQualificationResponseBodyDataOtherFiles() = default ;
    QuerySingleSmsQualificationResponseBodyDataOtherFiles& operator=(const QuerySingleSmsQualificationResponseBodyDataOtherFiles &) = default ;
    QuerySingleSmsQualificationResponseBodyDataOtherFiles& operator=(QuerySingleSmsQualificationResponseBodyDataOtherFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->licensePic_ == nullptr
        && return this->picUrl_ == nullptr; };
    // licensePic Field Functions 
    bool hasLicensePic() const { return this->licensePic_ != nullptr;};
    void deleteLicensePic() { this->licensePic_ = nullptr;};
    inline string licensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
    inline QuerySingleSmsQualificationResponseBodyDataOtherFiles& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string picUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline QuerySingleSmsQualificationResponseBodyDataOtherFiles& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


  protected:
    std::shared_ptr<string> licensePic_ = nullptr;
    // 文件的完整路径
    std::shared_ptr<string> picUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
