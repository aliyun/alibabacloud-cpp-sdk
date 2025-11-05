// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTONETASKPHONENUMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTONETASKPHONENUMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ImportOneTaskPhoneNumberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOneTaskPhoneNumberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetailId, detailId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOneTaskPhoneNumberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailId, detailId_);
    };
    ImportOneTaskPhoneNumberResponseBodyData() = default ;
    ImportOneTaskPhoneNumberResponseBodyData(const ImportOneTaskPhoneNumberResponseBodyData &) = default ;
    ImportOneTaskPhoneNumberResponseBodyData(ImportOneTaskPhoneNumberResponseBodyData &&) = default ;
    ImportOneTaskPhoneNumberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOneTaskPhoneNumberResponseBodyData() = default ;
    ImportOneTaskPhoneNumberResponseBodyData& operator=(const ImportOneTaskPhoneNumberResponseBodyData &) = default ;
    ImportOneTaskPhoneNumberResponseBodyData& operator=(ImportOneTaskPhoneNumberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailId_ == nullptr; };
    // detailId Field Functions 
    bool hasDetailId() const { return this->detailId_ != nullptr;};
    void deleteDetailId() { this->detailId_ = nullptr;};
    inline int64_t detailId() const { DARABONBA_PTR_GET_DEFAULT(detailId_, 0L) };
    inline ImportOneTaskPhoneNumberResponseBodyData& setDetailId(int64_t detailId) { DARABONBA_PTR_SET_VALUE(detailId_, detailId) };


  protected:
    std::shared_ptr<int64_t> detailId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
