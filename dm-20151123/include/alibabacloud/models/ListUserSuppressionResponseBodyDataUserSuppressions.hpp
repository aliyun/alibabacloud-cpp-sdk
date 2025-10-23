// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODYDATAUSERSUPPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODYDATAUSERSUPPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListUserSuppressionResponseBodyDataUserSuppressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSuppressionResponseBodyDataUserSuppressions& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastBounceTime, lastBounceTime_);
      DARABONBA_PTR_TO_JSON(SuppressionId, suppressionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSuppressionResponseBodyDataUserSuppressions& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastBounceTime, lastBounceTime_);
      DARABONBA_PTR_FROM_JSON(SuppressionId, suppressionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListUserSuppressionResponseBodyDataUserSuppressions() = default ;
    ListUserSuppressionResponseBodyDataUserSuppressions(const ListUserSuppressionResponseBodyDataUserSuppressions &) = default ;
    ListUserSuppressionResponseBodyDataUserSuppressions(ListUserSuppressionResponseBodyDataUserSuppressions &&) = default ;
    ListUserSuppressionResponseBodyDataUserSuppressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSuppressionResponseBodyDataUserSuppressions() = default ;
    ListUserSuppressionResponseBodyDataUserSuppressions& operator=(const ListUserSuppressionResponseBodyDataUserSuppressions &) = default ;
    ListUserSuppressionResponseBodyDataUserSuppressions& operator=(ListUserSuppressionResponseBodyDataUserSuppressions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->createTime_ == nullptr && return this->lastBounceTime_ == nullptr && return this->suppressionId_ == nullptr && return this->type_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListUserSuppressionResponseBodyDataUserSuppressions& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline ListUserSuppressionResponseBodyDataUserSuppressions& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastBounceTime Field Functions 
    bool hasLastBounceTime() const { return this->lastBounceTime_ != nullptr;};
    void deleteLastBounceTime() { this->lastBounceTime_ = nullptr;};
    inline int32_t lastBounceTime() const { DARABONBA_PTR_GET_DEFAULT(lastBounceTime_, 0) };
    inline ListUserSuppressionResponseBodyDataUserSuppressions& setLastBounceTime(int32_t lastBounceTime) { DARABONBA_PTR_SET_VALUE(lastBounceTime_, lastBounceTime) };


    // suppressionId Field Functions 
    bool hasSuppressionId() const { return this->suppressionId_ != nullptr;};
    void deleteSuppressionId() { this->suppressionId_ = nullptr;};
    inline int32_t suppressionId() const { DARABONBA_PTR_GET_DEFAULT(suppressionId_, 0) };
    inline ListUserSuppressionResponseBodyDataUserSuppressions& setSuppressionId(int32_t suppressionId) { DARABONBA_PTR_SET_VALUE(suppressionId_, suppressionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUserSuppressionResponseBodyDataUserSuppressions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Email address or domain name
    std::shared_ptr<string> address_ = nullptr;
    // Creation time, timestamp, accurate to the second.
    std::shared_ptr<int32_t> createTime_ = nullptr;
    // Last bounce hit time, timestamp, accurate to the second.
    std::shared_ptr<int32_t> lastBounceTime_ = nullptr;
    // Invalid address ID
    std::shared_ptr<int32_t> suppressionId_ = nullptr;
    // Source of entry, invalid address type
    // - system
    // - user
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
