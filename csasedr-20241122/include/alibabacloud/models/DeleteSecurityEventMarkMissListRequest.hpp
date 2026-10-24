// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYEVENTMARKMISSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYEVENTMARKMISSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DeleteSecurityEventMarkMissListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DeleteSecurityEventMarkMissListRequest() = default ;
    DeleteSecurityEventMarkMissListRequest(const DeleteSecurityEventMarkMissListRequest &) = default ;
    DeleteSecurityEventMarkMissListRequest(DeleteSecurityEventMarkMissListRequest &&) = default ;
    DeleteSecurityEventMarkMissListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityEventMarkMissListRequest() = default ;
    DeleteSecurityEventMarkMissListRequest& operator=(const DeleteSecurityEventMarkMissListRequest &) = default ;
    DeleteSecurityEventMarkMissListRequest& operator=(DeleteSecurityEventMarkMissListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DeleteSecurityEventMarkMissListRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DeleteSecurityEventMarkMissListRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // The list of alert whitelist rule IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> ids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
