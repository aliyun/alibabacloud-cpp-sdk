// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELTASK2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELTASK2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CancelTask2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelTask2Request& obj) { 
      DARABONBA_PTR_TO_JSON(bcId, bcId_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelTask2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(bcId, bcId_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
    };
    CancelTask2Request() = default ;
    CancelTask2Request(const CancelTask2Request &) = default ;
    CancelTask2Request(CancelTask2Request &&) = default ;
    CancelTask2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelTask2Request() = default ;
    CancelTask2Request& operator=(const CancelTask2Request &) = default ;
    CancelTask2Request& operator=(CancelTask2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bcId_ != nullptr
        && this->clientId_ != nullptr; };
    // bcId Field Functions 
    bool hasBcId() const { return this->bcId_ != nullptr;};
    void deleteBcId() { this->bcId_ = nullptr;};
    inline int64_t bcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
    inline CancelTask2Request& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline CancelTask2Request& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


  protected:
    std::shared_ptr<int64_t> bcId_ = nullptr;
    std::shared_ptr<int64_t> clientId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
