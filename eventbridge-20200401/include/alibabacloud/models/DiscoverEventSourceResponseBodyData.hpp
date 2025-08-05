// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLDiscovery, sourceMySQLDiscovery_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLDiscovery, sourceMySQLDiscovery_);
    };
    DiscoverEventSourceResponseBodyData() = default ;
    DiscoverEventSourceResponseBodyData(const DiscoverEventSourceResponseBodyData &) = default ;
    DiscoverEventSourceResponseBodyData(DiscoverEventSourceResponseBodyData &&) = default ;
    DiscoverEventSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceResponseBodyData() = default ;
    DiscoverEventSourceResponseBodyData& operator=(const DiscoverEventSourceResponseBodyData &) = default ;
    DiscoverEventSourceResponseBodyData& operator=(DiscoverEventSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceMySQLDiscovery_ != nullptr; };
    // sourceMySQLDiscovery Field Functions 
    bool hasSourceMySQLDiscovery() const { return this->sourceMySQLDiscovery_ != nullptr;};
    void deleteSourceMySQLDiscovery() { this->sourceMySQLDiscovery_ = nullptr;};
    inline const Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery & sourceMySQLDiscovery() const { DARABONBA_PTR_GET_CONST(sourceMySQLDiscovery_, Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery) };
    inline Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery sourceMySQLDiscovery() { DARABONBA_PTR_GET(sourceMySQLDiscovery_, Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery) };
    inline DiscoverEventSourceResponseBodyData& setSourceMySQLDiscovery(const Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery & sourceMySQLDiscovery) { DARABONBA_PTR_SET_VALUE(sourceMySQLDiscovery_, sourceMySQLDiscovery) };
    inline DiscoverEventSourceResponseBodyData& setSourceMySQLDiscovery(Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery && sourceMySQLDiscovery) { DARABONBA_PTR_SET_RVALUE(sourceMySQLDiscovery_, sourceMySQLDiscovery) };


  protected:
    std::shared_ptr<Models::DiscoverEventSourceResponseBodyDataSourceMySQLDiscovery> sourceMySQLDiscovery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
