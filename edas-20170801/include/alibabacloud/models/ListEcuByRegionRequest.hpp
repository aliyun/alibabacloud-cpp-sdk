// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECUBYREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTECUBYREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListEcuByRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcuByRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Act, act_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcuByRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Act, act_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
    };
    ListEcuByRegionRequest() = default ;
    ListEcuByRegionRequest(const ListEcuByRegionRequest &) = default ;
    ListEcuByRegionRequest(ListEcuByRegionRequest &&) = default ;
    ListEcuByRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcuByRegionRequest() = default ;
    ListEcuByRegionRequest& operator=(const ListEcuByRegionRequest &) = default ;
    ListEcuByRegionRequest& operator=(ListEcuByRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->act_ == nullptr
        && return this->logicalRegionId_ == nullptr; };
    // act Field Functions 
    bool hasAct() const { return this->act_ != nullptr;};
    void deleteAct() { this->act_ = nullptr;};
    inline string act() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
    inline ListEcuByRegionRequest& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline ListEcuByRegionRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


  protected:
    // Set the value to `pop-query`.
    // 
    // This parameter is required.
    std::shared_ptr<string> act_ = nullptr;
    // The ID of the namespace.
    // 
    // *   The ID of a custom namespace is in the `region ID:namespace identifier` format. Example: cn-beijing:tdy218.
    // *   The ID of the default namespace is in the `region ID` format. Example: cn-beijing.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
