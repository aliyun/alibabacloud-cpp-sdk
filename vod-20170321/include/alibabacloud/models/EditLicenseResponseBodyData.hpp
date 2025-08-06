// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EDITLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EditLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EditLicenseResponseBodyData() = default ;
    EditLicenseResponseBodyData(const EditLicenseResponseBodyData &) = default ;
    EditLicenseResponseBodyData(EditLicenseResponseBodyData &&) = default ;
    EditLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditLicenseResponseBodyData() = default ;
    EditLicenseResponseBodyData& operator=(const EditLicenseResponseBodyData &) = default ;
    EditLicenseResponseBodyData& operator=(EditLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline EditLicenseResponseBodyData& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
