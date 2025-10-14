// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODYOPENHONORS_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODYOPENHONORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgHonorsResponseBodyOpenHonors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgHonorsResponseBodyOpenHonors& obj) { 
      DARABONBA_PTR_TO_JSON(honorDesc, honorDesc_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(honorImgUrl, honorImgUrl_);
      DARABONBA_PTR_TO_JSON(honorName, honorName_);
      DARABONBA_PTR_TO_JSON(honorPendantImgUrl, honorPendantImgUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgHonorsResponseBodyOpenHonors& obj) { 
      DARABONBA_PTR_FROM_JSON(honorDesc, honorDesc_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(honorImgUrl, honorImgUrl_);
      DARABONBA_PTR_FROM_JSON(honorName, honorName_);
      DARABONBA_PTR_FROM_JSON(honorPendantImgUrl, honorPendantImgUrl_);
    };
    QueryOrgHonorsResponseBodyOpenHonors() = default ;
    QueryOrgHonorsResponseBodyOpenHonors(const QueryOrgHonorsResponseBodyOpenHonors &) = default ;
    QueryOrgHonorsResponseBodyOpenHonors(QueryOrgHonorsResponseBodyOpenHonors &&) = default ;
    QueryOrgHonorsResponseBodyOpenHonors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgHonorsResponseBodyOpenHonors() = default ;
    QueryOrgHonorsResponseBodyOpenHonors& operator=(const QueryOrgHonorsResponseBodyOpenHonors &) = default ;
    QueryOrgHonorsResponseBodyOpenHonors& operator=(QueryOrgHonorsResponseBodyOpenHonors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honorDesc_ == nullptr
        && return this->honorId_ == nullptr && return this->honorImgUrl_ == nullptr && return this->honorName_ == nullptr && return this->honorPendantImgUrl_ == nullptr; };
    // honorDesc Field Functions 
    bool hasHonorDesc() const { return this->honorDesc_ != nullptr;};
    void deleteHonorDesc() { this->honorDesc_ = nullptr;};
    inline string honorDesc() const { DARABONBA_PTR_GET_DEFAULT(honorDesc_, "") };
    inline QueryOrgHonorsResponseBodyOpenHonors& setHonorDesc(string honorDesc) { DARABONBA_PTR_SET_VALUE(honorDesc_, honorDesc) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline int64_t honorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, 0L) };
    inline QueryOrgHonorsResponseBodyOpenHonors& setHonorId(int64_t honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // honorImgUrl Field Functions 
    bool hasHonorImgUrl() const { return this->honorImgUrl_ != nullptr;};
    void deleteHonorImgUrl() { this->honorImgUrl_ = nullptr;};
    inline string honorImgUrl() const { DARABONBA_PTR_GET_DEFAULT(honorImgUrl_, "") };
    inline QueryOrgHonorsResponseBodyOpenHonors& setHonorImgUrl(string honorImgUrl) { DARABONBA_PTR_SET_VALUE(honorImgUrl_, honorImgUrl) };


    // honorName Field Functions 
    bool hasHonorName() const { return this->honorName_ != nullptr;};
    void deleteHonorName() { this->honorName_ = nullptr;};
    inline string honorName() const { DARABONBA_PTR_GET_DEFAULT(honorName_, "") };
    inline QueryOrgHonorsResponseBodyOpenHonors& setHonorName(string honorName) { DARABONBA_PTR_SET_VALUE(honorName_, honorName) };


    // honorPendantImgUrl Field Functions 
    bool hasHonorPendantImgUrl() const { return this->honorPendantImgUrl_ != nullptr;};
    void deleteHonorPendantImgUrl() { this->honorPendantImgUrl_ = nullptr;};
    inline string honorPendantImgUrl() const { DARABONBA_PTR_GET_DEFAULT(honorPendantImgUrl_, "") };
    inline QueryOrgHonorsResponseBodyOpenHonors& setHonorPendantImgUrl(string honorPendantImgUrl) { DARABONBA_PTR_SET_VALUE(honorPendantImgUrl_, honorPendantImgUrl) };


  protected:
    std::shared_ptr<string> honorDesc_ = nullptr;
    std::shared_ptr<int64_t> honorId_ = nullptr;
    std::shared_ptr<string> honorImgUrl_ = nullptr;
    std::shared_ptr<string> honorName_ = nullptr;
    std::shared_ptr<string> honorPendantImgUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
