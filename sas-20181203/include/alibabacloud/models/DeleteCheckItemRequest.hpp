// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCheckItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
    };
    DeleteCheckItemRequest() = default ;
    DeleteCheckItemRequest(const DeleteCheckItemRequest &) = default ;
    DeleteCheckItemRequest(DeleteCheckItemRequest &&) = default ;
    DeleteCheckItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckItemRequest() = default ;
    DeleteCheckItemRequest& operator=(const DeleteCheckItemRequest &) = default ;
    DeleteCheckItemRequest& operator=(DeleteCheckItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline DeleteCheckItemRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline DeleteCheckItemRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


  protected:
    // List of check item IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> checkIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
