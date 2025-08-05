// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DiscoverEventSourceRequestSourceMySQLParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    DiscoverEventSourceRequest() = default ;
    DiscoverEventSourceRequest(const DiscoverEventSourceRequest &) = default ;
    DiscoverEventSourceRequest(DiscoverEventSourceRequest &&) = default ;
    DiscoverEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceRequest() = default ;
    DiscoverEventSourceRequest& operator=(const DiscoverEventSourceRequest &) = default ;
    DiscoverEventSourceRequest& operator=(DiscoverEventSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceMySQLParameters_ != nullptr; };
    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const DiscoverEventSourceRequestSourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, DiscoverEventSourceRequestSourceMySQLParameters) };
    inline DiscoverEventSourceRequestSourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, DiscoverEventSourceRequestSourceMySQLParameters) };
    inline DiscoverEventSourceRequest& setSourceMySQLParameters(const DiscoverEventSourceRequestSourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline DiscoverEventSourceRequest& setSourceMySQLParameters(DiscoverEventSourceRequestSourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


  protected:
    std::shared_ptr<DiscoverEventSourceRequestSourceMySQLParameters> sourceMySQLParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
