// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListStandardGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStandardGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListStandardGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListStandardGroupsRequest() = default ;
    ListStandardGroupsRequest(const ListStandardGroupsRequest &) = default ;
    ListStandardGroupsRequest(ListStandardGroupsRequest &&) = default ;
    ListStandardGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStandardGroupsRequest() = default ;
    ListStandardGroupsRequest& operator=(const ListStandardGroupsRequest &) = default ;
    ListStandardGroupsRequest& operator=(ListStandardGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tid_ == nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListStandardGroupsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
