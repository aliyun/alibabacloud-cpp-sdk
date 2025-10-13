// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHWEBAPPLICATIONREVISIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHWEBAPPLICATIONREVISIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Container.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PublishWebApplicationRevisionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishWebApplicationRevisionInput& obj) { 
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableArmsMetrics, enableArmsMetrics_);
      DARABONBA_PTR_TO_JSON(TakeEffect, takeEffect_);
    };
    friend void from_json(const Darabonba::Json& j, PublishWebApplicationRevisionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableArmsMetrics, enableArmsMetrics_);
      DARABONBA_PTR_FROM_JSON(TakeEffect, takeEffect_);
    };
    PublishWebApplicationRevisionInput() = default ;
    PublishWebApplicationRevisionInput(const PublishWebApplicationRevisionInput &) = default ;
    PublishWebApplicationRevisionInput(PublishWebApplicationRevisionInput &&) = default ;
    PublishWebApplicationRevisionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishWebApplicationRevisionInput() = default ;
    PublishWebApplicationRevisionInput& operator=(const PublishWebApplicationRevisionInput &) = default ;
    PublishWebApplicationRevisionInput& operator=(PublishWebApplicationRevisionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containers_ == nullptr
        && return this->description_ == nullptr && return this->enableArmsMetrics_ == nullptr && return this->takeEffect_ == nullptr; };
    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Container> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Container>) };
    inline vector<Container> containers() { DARABONBA_PTR_GET(containers_, vector<Container>) };
    inline PublishWebApplicationRevisionInput& setContainers(const vector<Container> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline PublishWebApplicationRevisionInput& setContainers(vector<Container> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishWebApplicationRevisionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableArmsMetrics Field Functions 
    bool hasEnableArmsMetrics() const { return this->enableArmsMetrics_ != nullptr;};
    void deleteEnableArmsMetrics() { this->enableArmsMetrics_ = nullptr;};
    inline bool enableArmsMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableArmsMetrics_, false) };
    inline PublishWebApplicationRevisionInput& setEnableArmsMetrics(bool enableArmsMetrics) { DARABONBA_PTR_SET_VALUE(enableArmsMetrics_, enableArmsMetrics) };


    // takeEffect Field Functions 
    bool hasTakeEffect() const { return this->takeEffect_ != nullptr;};
    void deleteTakeEffect() { this->takeEffect_ = nullptr;};
    inline bool takeEffect() const { DARABONBA_PTR_GET_DEFAULT(takeEffect_, false) };
    inline PublishWebApplicationRevisionInput& setTakeEffect(bool takeEffect) { DARABONBA_PTR_SET_VALUE(takeEffect_, takeEffect) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Container>> containers_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableArmsMetrics_ = nullptr;
    std::shared_ptr<bool> takeEffect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
