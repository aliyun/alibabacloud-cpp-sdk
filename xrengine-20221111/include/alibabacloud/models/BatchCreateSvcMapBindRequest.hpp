// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATESVCMAPBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATESVCMAPBINDREQUEST_HPP_
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
  class BatchCreateSvcMapBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateSvcMapBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(MapIds, mapIds_);
      DARABONBA_PTR_TO_JSON(SvcId, svcId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateSvcMapBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(MapIds, mapIds_);
      DARABONBA_PTR_FROM_JSON(SvcId, svcId_);
    };
    BatchCreateSvcMapBindRequest() = default ;
    BatchCreateSvcMapBindRequest(const BatchCreateSvcMapBindRequest &) = default ;
    BatchCreateSvcMapBindRequest(BatchCreateSvcMapBindRequest &&) = default ;
    BatchCreateSvcMapBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateSvcMapBindRequest() = default ;
    BatchCreateSvcMapBindRequest& operator=(const BatchCreateSvcMapBindRequest &) = default ;
    BatchCreateSvcMapBindRequest& operator=(BatchCreateSvcMapBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && this->mapIds_ == nullptr && this->svcId_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline BatchCreateSvcMapBindRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapIds Field Functions 
    bool hasMapIds() const { return this->mapIds_ != nullptr;};
    void deleteMapIds() { this->mapIds_ = nullptr;};
    inline const vector<int64_t> & getMapIds() const { DARABONBA_PTR_GET_CONST(mapIds_, vector<int64_t>) };
    inline vector<int64_t> getMapIds() { DARABONBA_PTR_GET(mapIds_, vector<int64_t>) };
    inline BatchCreateSvcMapBindRequest& setMapIds(const vector<int64_t> & mapIds) { DARABONBA_PTR_SET_VALUE(mapIds_, mapIds) };
    inline BatchCreateSvcMapBindRequest& setMapIds(vector<int64_t> && mapIds) { DARABONBA_PTR_SET_RVALUE(mapIds_, mapIds) };


    // svcId Field Functions 
    bool hasSvcId() const { return this->svcId_ != nullptr;};
    void deleteSvcId() { this->svcId_ = nullptr;};
    inline int64_t getSvcId() const { DARABONBA_PTR_GET_DEFAULT(svcId_, 0L) };
    inline BatchCreateSvcMapBindRequest& setSvcId(int64_t svcId) { DARABONBA_PTR_SET_VALUE(svcId_, svcId) };


  protected:
    shared_ptr<string> jwtToken_ {};
    // This parameter is required.
    shared_ptr<vector<int64_t>> mapIds_ {};
    shared_ptr<int64_t> svcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
