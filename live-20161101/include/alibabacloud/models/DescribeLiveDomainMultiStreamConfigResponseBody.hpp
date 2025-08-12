// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMULTISTREAMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMULTISTREAMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMultiStreamConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMultiStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMultiStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
    };
    DescribeLiveDomainMultiStreamConfigResponseBody() = default ;
    DescribeLiveDomainMultiStreamConfigResponseBody(const DescribeLiveDomainMultiStreamConfigResponseBody &) = default ;
    DescribeLiveDomainMultiStreamConfigResponseBody(DescribeLiveDomainMultiStreamConfigResponseBody &&) = default ;
    DescribeLiveDomainMultiStreamConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMultiStreamConfigResponseBody() = default ;
    DescribeLiveDomainMultiStreamConfigResponseBody& operator=(const DescribeLiveDomainMultiStreamConfigResponseBody &) = default ;
    DescribeLiveDomainMultiStreamConfigResponseBody& operator=(DescribeLiveDomainMultiStreamConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->switch_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainMultiStreamConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string _switch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline DescribeLiveDomainMultiStreamConfigResponseBody& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the dual-stream disaster recovery feature is enabled. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> switch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
