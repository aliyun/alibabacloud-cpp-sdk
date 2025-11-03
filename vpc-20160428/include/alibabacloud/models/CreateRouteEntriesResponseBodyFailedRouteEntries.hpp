// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODYFAILEDROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODYFAILEDROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteEntriesResponseBodyFailedRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntriesResponseBodyFailedRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_TO_JSON(FailedCode, failedCode_);
      DARABONBA_PTR_TO_JSON(FailedMessage, failedMessage_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntriesResponseBodyFailedRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_FROM_JSON(FailedCode, failedCode_);
      DARABONBA_PTR_FROM_JSON(FailedMessage, failedMessage_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
    };
    CreateRouteEntriesResponseBodyFailedRouteEntries() = default ;
    CreateRouteEntriesResponseBodyFailedRouteEntries(const CreateRouteEntriesResponseBodyFailedRouteEntries &) = default ;
    CreateRouteEntriesResponseBodyFailedRouteEntries(CreateRouteEntriesResponseBodyFailedRouteEntries &&) = default ;
    CreateRouteEntriesResponseBodyFailedRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntriesResponseBodyFailedRouteEntries() = default ;
    CreateRouteEntriesResponseBodyFailedRouteEntries& operator=(const CreateRouteEntriesResponseBodyFailedRouteEntries &) = default ;
    CreateRouteEntriesResponseBodyFailedRouteEntries& operator=(CreateRouteEntriesResponseBodyFailedRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstCidrBlock_ == nullptr
        && return this->failedCode_ == nullptr && return this->failedMessage_ == nullptr && return this->nextHop_ == nullptr; };
    // dstCidrBlock Field Functions 
    bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
    void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
    inline string dstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
    inline CreateRouteEntriesResponseBodyFailedRouteEntries& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


    // failedCode Field Functions 
    bool hasFailedCode() const { return this->failedCode_ != nullptr;};
    void deleteFailedCode() { this->failedCode_ = nullptr;};
    inline string failedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
    inline CreateRouteEntriesResponseBodyFailedRouteEntries& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


    // failedMessage Field Functions 
    bool hasFailedMessage() const { return this->failedMessage_ != nullptr;};
    void deleteFailedMessage() { this->failedMessage_ = nullptr;};
    inline string failedMessage() const { DARABONBA_PTR_GET_DEFAULT(failedMessage_, "") };
    inline CreateRouteEntriesResponseBodyFailedRouteEntries& setFailedMessage(string failedMessage) { DARABONBA_PTR_SET_VALUE(failedMessage_, failedMessage) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateRouteEntriesResponseBodyFailedRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


  protected:
    // The destination CIDR block of the custom route entry that failed to be added.
    std::shared_ptr<string> dstCidrBlock_ = nullptr;
    // The error code.
    std::shared_ptr<string> failedCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> failedMessage_ = nullptr;
    // The ID of the next hop of the custom route entry that failed to be added.
    std::shared_ptr<string> nextHop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
