// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICECMD_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class OpenServiceGroupForServiceCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceGroupForServiceCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(laneId, laneId_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceGroupForServiceCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(laneId, laneId_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
    };
    OpenServiceGroupForServiceCmd() = default ;
    OpenServiceGroupForServiceCmd(const OpenServiceGroupForServiceCmd &) = default ;
    OpenServiceGroupForServiceCmd(OpenServiceGroupForServiceCmd &&) = default ;
    OpenServiceGroupForServiceCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceGroupForServiceCmd() = default ;
    OpenServiceGroupForServiceCmd& operator=(const OpenServiceGroupForServiceCmd &) = default ;
    OpenServiceGroupForServiceCmd& operator=(OpenServiceGroupForServiceCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->laneId_ == nullptr && this->serviceIds_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline OpenServiceGroupForServiceCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline OpenServiceGroupForServiceCmd& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<int64_t> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<int64_t>) };
    inline vector<int64_t> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<int64_t>) };
    inline OpenServiceGroupForServiceCmd& setServiceIds(const vector<int64_t> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline OpenServiceGroupForServiceCmd& setServiceIds(vector<int64_t> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<int64_t> laneId_ {};
    shared_ptr<vector<int64_t>> serviceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
