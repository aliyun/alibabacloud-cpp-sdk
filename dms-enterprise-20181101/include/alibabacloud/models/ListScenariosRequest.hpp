// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListScenariosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenariosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenariosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListScenariosRequest() = default ;
    ListScenariosRequest(const ListScenariosRequest &) = default ;
    ListScenariosRequest(ListScenariosRequest &&) = default ;
    ListScenariosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenariosRequest() = default ;
    ListScenariosRequest& operator=(const ListScenariosRequest &) = default ;
    ListScenariosRequest& operator=(ListScenariosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tid_ != nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListScenariosRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
