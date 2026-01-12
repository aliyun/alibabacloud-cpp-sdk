// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETESVCMAPBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETESVCMAPBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class BatchDeleteSvcMapBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteSvcMapBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteSvcMapBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    BatchDeleteSvcMapBindRequest() = default ;
    BatchDeleteSvcMapBindRequest(const BatchDeleteSvcMapBindRequest &) = default ;
    BatchDeleteSvcMapBindRequest(BatchDeleteSvcMapBindRequest &&) = default ;
    BatchDeleteSvcMapBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteSvcMapBindRequest() = default ;
    BatchDeleteSvcMapBindRequest& operator=(const BatchDeleteSvcMapBindRequest &) = default ;
    BatchDeleteSvcMapBindRequest& operator=(BatchDeleteSvcMapBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->jwtToken_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline BatchDeleteSvcMapBindRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline BatchDeleteSvcMapBindRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline BatchDeleteSvcMapBindRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    // This parameter is required.
    shared_ptr<vector<int64_t>> ids_ {};
    shared_ptr<string> jwtToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
