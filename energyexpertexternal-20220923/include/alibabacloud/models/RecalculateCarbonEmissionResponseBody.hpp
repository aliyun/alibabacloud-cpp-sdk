// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALCULATECARBONEMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECALCULATECARBONEMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class RecalculateCarbonEmissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecalculateCarbonEmissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecalculateCarbonEmissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RecalculateCarbonEmissionResponseBody() = default ;
    RecalculateCarbonEmissionResponseBody(const RecalculateCarbonEmissionResponseBody &) = default ;
    RecalculateCarbonEmissionResponseBody(RecalculateCarbonEmissionResponseBody &&) = default ;
    RecalculateCarbonEmissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecalculateCarbonEmissionResponseBody() = default ;
    RecalculateCarbonEmissionResponseBody& operator=(const RecalculateCarbonEmissionResponseBody &) = default ;
    RecalculateCarbonEmissionResponseBody& operator=(RecalculateCarbonEmissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline RecalculateCarbonEmissionResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecalculateCarbonEmissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data. A value of true indicates that the request is successful. A value of false indicates that the request fails.
    std::shared_ptr<bool> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
