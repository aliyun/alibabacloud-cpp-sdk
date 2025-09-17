// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATABUSINESSLICENSEPICS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATABUSINESSLICENSEPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& obj) { 
      DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& obj) { 
      DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
      DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics() = default ;
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics(const QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics &) = default ;
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics(QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics &&) = default ;
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics() = default ;
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& operator=(const QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics &) = default ;
    QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& operator=(QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licensePic_ != nullptr
        && this->picUrl_ != nullptr && this->type_ != nullptr; };
    // licensePic Field Functions 
    bool hasLicensePic() const { return this->licensePic_ != nullptr;};
    void deleteLicensePic() { this->licensePic_ = nullptr;};
    inline string licensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
    inline QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string picUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> licensePic_ = nullptr;
    // 文件的完整路径
    std::shared_ptr<string> picUrl_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
