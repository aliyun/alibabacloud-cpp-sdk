// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODYBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELKYUUBISPARKAPPLICATIONRESPONSEBODYBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CancelKyuubiSparkApplicationResponseBodyBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelKyuubiSparkApplicationResponseBodyBody& obj) { 
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CancelKyuubiSparkApplicationResponseBodyBody& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CancelKyuubiSparkApplicationResponseBodyBody() = default ;
    CancelKyuubiSparkApplicationResponseBodyBody(const CancelKyuubiSparkApplicationResponseBodyBody &) = default ;
    CancelKyuubiSparkApplicationResponseBodyBody(CancelKyuubiSparkApplicationResponseBodyBody &&) = default ;
    CancelKyuubiSparkApplicationResponseBodyBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelKyuubiSparkApplicationResponseBodyBody() = default ;
    CancelKyuubiSparkApplicationResponseBodyBody& operator=(const CancelKyuubiSparkApplicationResponseBodyBody &) = default ;
    CancelKyuubiSparkApplicationResponseBodyBody& operator=(CancelKyuubiSparkApplicationResponseBodyBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->success_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CancelKyuubiSparkApplicationResponseBodyBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CancelKyuubiSparkApplicationResponseBodyBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
