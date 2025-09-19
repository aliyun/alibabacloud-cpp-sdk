// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILEPROTECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILEPROTECTRULEREQUEST_HPP_
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
  class DeleteFileProtectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteFileProtectRuleRequest() = default ;
    DeleteFileProtectRuleRequest(const DeleteFileProtectRuleRequest &) = default ;
    DeleteFileProtectRuleRequest(DeleteFileProtectRuleRequest &&) = default ;
    DeleteFileProtectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFileProtectRuleRequest() = default ;
    DeleteFileProtectRuleRequest& operator=(const DeleteFileProtectRuleRequest &) = default ;
    DeleteFileProtectRuleRequest& operator=(DeleteFileProtectRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<int64_t> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<int64_t>) };
    inline vector<int64_t> id() { DARABONBA_PTR_GET(id_, vector<int64_t>) };
    inline DeleteFileProtectRuleRequest& setId(const vector<int64_t> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline DeleteFileProtectRuleRequest& setId(vector<int64_t> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


  protected:
    // The IDs of the core file monitoring rules that you want to delete.
    std::shared_ptr<vector<int64_t>> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
