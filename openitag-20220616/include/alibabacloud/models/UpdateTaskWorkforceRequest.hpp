// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKWORKFORCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKWORKFORCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleWorkforce.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UpdateTaskWorkforceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskWorkforceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Workforce, workforce_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskWorkforceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Workforce, workforce_);
    };
    UpdateTaskWorkforceRequest() = default ;
    UpdateTaskWorkforceRequest(const UpdateTaskWorkforceRequest &) = default ;
    UpdateTaskWorkforceRequest(UpdateTaskWorkforceRequest &&) = default ;
    UpdateTaskWorkforceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskWorkforceRequest() = default ;
    UpdateTaskWorkforceRequest& operator=(const UpdateTaskWorkforceRequest &) = default ;
    UpdateTaskWorkforceRequest& operator=(UpdateTaskWorkforceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workforce_ == nullptr; };
    // workforce Field Functions 
    bool hasWorkforce() const { return this->workforce_ != nullptr;};
    void deleteWorkforce() { this->workforce_ = nullptr;};
    inline const vector<SimpleWorkforce> & getWorkforce() const { DARABONBA_PTR_GET_CONST(workforce_, vector<SimpleWorkforce>) };
    inline vector<SimpleWorkforce> getWorkforce() { DARABONBA_PTR_GET(workforce_, vector<SimpleWorkforce>) };
    inline UpdateTaskWorkforceRequest& setWorkforce(const vector<SimpleWorkforce> & workforce) { DARABONBA_PTR_SET_VALUE(workforce_, workforce) };
    inline UpdateTaskWorkforceRequest& setWorkforce(vector<SimpleWorkforce> && workforce) { DARABONBA_PTR_SET_RVALUE(workforce_, workforce) };


  protected:
    // User List.
    shared_ptr<vector<SimpleWorkforce>> workforce_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
