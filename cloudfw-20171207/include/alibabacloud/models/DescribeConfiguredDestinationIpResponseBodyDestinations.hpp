// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODYDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGUREDDESTINATIONIPRESPONSEBODYDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeConfiguredDestinationIPResponseBodyDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfiguredDestinationIPResponseBodyDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DestinationIP, destinationIP_);
      DARABONBA_PTR_TO_JSON(DestinationISP, destinationISP_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfiguredDestinationIPResponseBodyDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DestinationIP, destinationIP_);
      DARABONBA_PTR_FROM_JSON(DestinationISP, destinationISP_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
    };
    DescribeConfiguredDestinationIPResponseBodyDestinations() = default ;
    DescribeConfiguredDestinationIPResponseBodyDestinations(const DescribeConfiguredDestinationIPResponseBodyDestinations &) = default ;
    DescribeConfiguredDestinationIPResponseBodyDestinations(DescribeConfiguredDestinationIPResponseBodyDestinations &&) = default ;
    DescribeConfiguredDestinationIPResponseBodyDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfiguredDestinationIPResponseBodyDestinations() = default ;
    DescribeConfiguredDestinationIPResponseBodyDestinations& operator=(const DescribeConfiguredDestinationIPResponseBodyDestinations &) = default ;
    DescribeConfiguredDestinationIPResponseBodyDestinations& operator=(DescribeConfiguredDestinationIPResponseBodyDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->destinationIP_ == nullptr && return this->destinationISP_ == nullptr && return this->destinationRegion_ == nullptr && return this->operationTime_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeConfiguredDestinationIPResponseBodyDestinations& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // destinationIP Field Functions 
    bool hasDestinationIP() const { return this->destinationIP_ != nullptr;};
    void deleteDestinationIP() { this->destinationIP_ = nullptr;};
    inline string destinationIP() const { DARABONBA_PTR_GET_DEFAULT(destinationIP_, "") };
    inline DescribeConfiguredDestinationIPResponseBodyDestinations& setDestinationIP(string destinationIP) { DARABONBA_PTR_SET_VALUE(destinationIP_, destinationIP) };


    // destinationISP Field Functions 
    bool hasDestinationISP() const { return this->destinationISP_ != nullptr;};
    void deleteDestinationISP() { this->destinationISP_ = nullptr;};
    inline string destinationISP() const { DARABONBA_PTR_GET_DEFAULT(destinationISP_, "") };
    inline DescribeConfiguredDestinationIPResponseBodyDestinations& setDestinationISP(string destinationISP) { DARABONBA_PTR_SET_VALUE(destinationISP_, destinationISP) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string destinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline DescribeConfiguredDestinationIPResponseBodyDestinations& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline int32_t operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, 0) };
    inline DescribeConfiguredDestinationIPResponseBodyDestinations& setOperationTime(int32_t operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> destinationIP_ = nullptr;
    std::shared_ptr<string> destinationISP_ = nullptr;
    std::shared_ptr<string> destinationRegion_ = nullptr;
    std::shared_ptr<int32_t> operationTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
