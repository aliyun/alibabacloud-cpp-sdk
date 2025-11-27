// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYRENDERINGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYRENDERINGSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyRenderingStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyRenderingStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyRenderingStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRenderingInstanceResponseBodyRenderingStatus() = default ;
    DescribeRenderingInstanceResponseBodyRenderingStatus(const DescribeRenderingInstanceResponseBodyRenderingStatus &) = default ;
    DescribeRenderingInstanceResponseBodyRenderingStatus(DescribeRenderingInstanceResponseBodyRenderingStatus &&) = default ;
    DescribeRenderingInstanceResponseBodyRenderingStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyRenderingStatus() = default ;
    DescribeRenderingInstanceResponseBodyRenderingStatus& operator=(const DescribeRenderingInstanceResponseBodyRenderingStatus &) = default ;
    DescribeRenderingInstanceResponseBodyRenderingStatus& operator=(DescribeRenderingInstanceResponseBodyRenderingStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->latestAction_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRenderingInstanceResponseBodyRenderingStatus& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // latestAction Field Functions 
    bool hasLatestAction() const { return this->latestAction_ != nullptr;};
    void deleteLatestAction() { this->latestAction_ = nullptr;};
    inline string latestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
    inline DescribeRenderingInstanceResponseBodyRenderingStatus& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRenderingInstanceResponseBodyRenderingStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> latestAction_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
