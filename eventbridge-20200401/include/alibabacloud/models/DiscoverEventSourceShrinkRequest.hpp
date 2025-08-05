// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParametersShrink_);
    };
    DiscoverEventSourceShrinkRequest() = default ;
    DiscoverEventSourceShrinkRequest(const DiscoverEventSourceShrinkRequest &) = default ;
    DiscoverEventSourceShrinkRequest(DiscoverEventSourceShrinkRequest &&) = default ;
    DiscoverEventSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceShrinkRequest() = default ;
    DiscoverEventSourceShrinkRequest& operator=(const DiscoverEventSourceShrinkRequest &) = default ;
    DiscoverEventSourceShrinkRequest& operator=(DiscoverEventSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceMySQLParametersShrink_ != nullptr; };
    // sourceMySQLParametersShrink Field Functions 
    bool hasSourceMySQLParametersShrink() const { return this->sourceMySQLParametersShrink_ != nullptr;};
    void deleteSourceMySQLParametersShrink() { this->sourceMySQLParametersShrink_ = nullptr;};
    inline string sourceMySQLParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceMySQLParametersShrink_, "") };
    inline DiscoverEventSourceShrinkRequest& setSourceMySQLParametersShrink(string sourceMySQLParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceMySQLParametersShrink_, sourceMySQLParametersShrink) };


  protected:
    std::shared_ptr<string> sourceMySQLParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
