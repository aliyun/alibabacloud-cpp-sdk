// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEWORKFORCE_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEWORKFORCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SimpleWorkforce : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleWorkforce& obj) { 
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      DARABONBA_PTR_TO_JSON(WorkNodeId, workNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleWorkforce& obj) { 
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      DARABONBA_PTR_FROM_JSON(WorkNodeId, workNodeId_);
    };
    SimpleWorkforce() = default ;
    SimpleWorkforce(const SimpleWorkforce &) = default ;
    SimpleWorkforce(SimpleWorkforce &&) = default ;
    SimpleWorkforce(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleWorkforce() = default ;
    SimpleWorkforce& operator=(const SimpleWorkforce &) = default ;
    SimpleWorkforce& operator=(SimpleWorkforce &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userIds_ == nullptr
        && this->workNodeId_ == nullptr; };
    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<int64_t> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<int64_t>) };
    inline vector<int64_t> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<int64_t>) };
    inline SimpleWorkforce& setUserIds(const vector<int64_t> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline SimpleWorkforce& setUserIds(vector<int64_t> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    // workNodeId Field Functions 
    bool hasWorkNodeId() const { return this->workNodeId_ != nullptr;};
    void deleteWorkNodeId() { this->workNodeId_ = nullptr;};
    inline int32_t getWorkNodeId() const { DARABONBA_PTR_GET_DEFAULT(workNodeId_, 0) };
    inline SimpleWorkforce& setWorkNodeId(int32_t workNodeId) { DARABONBA_PTR_SET_VALUE(workNodeId_, workNodeId) };


  protected:
    // List of personnel information.
    shared_ptr<vector<int64_t>> userIds_ {};
    // Node ID. For more information, see [GetTaskWorkforce](https://help.aliyun.com/document_detail/454697.html).
    shared_ptr<int32_t> workNodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
