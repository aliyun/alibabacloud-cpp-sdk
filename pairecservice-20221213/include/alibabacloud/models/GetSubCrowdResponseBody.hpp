// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBCROWDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBCROWDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetSubCrowdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubCrowdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubCrowdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    GetSubCrowdResponseBody() = default ;
    GetSubCrowdResponseBody(const GetSubCrowdResponseBody &) = default ;
    GetSubCrowdResponseBody(GetSubCrowdResponseBody &&) = default ;
    GetSubCrowdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubCrowdResponseBody() = default ;
    GetSubCrowdResponseBody& operator=(const GetSubCrowdResponseBody &) = default ;
    GetSubCrowdResponseBody& operator=(GetSubCrowdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->quantity_ == nullptr && this->requestId_ == nullptr && this->source_ == nullptr && this->users_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetSubCrowdResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline GetSubCrowdResponseBody& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubCrowdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetSubCrowdResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline string getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
    inline GetSubCrowdResponseBody& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


  protected:
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> quantity_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
