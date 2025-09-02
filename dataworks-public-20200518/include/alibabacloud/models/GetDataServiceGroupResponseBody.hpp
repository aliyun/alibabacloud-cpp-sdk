// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceGroupResponseBodyGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceGroupResponseBody() = default ;
    GetDataServiceGroupResponseBody(const GetDataServiceGroupResponseBody &) = default ;
    GetDataServiceGroupResponseBody(GetDataServiceGroupResponseBody &&) = default ;
    GetDataServiceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceGroupResponseBody() = default ;
    GetDataServiceGroupResponseBody& operator=(const GetDataServiceGroupResponseBody &) = default ;
    GetDataServiceGroupResponseBody& operator=(GetDataServiceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->requestId_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const GetDataServiceGroupResponseBodyGroup & group() const { DARABONBA_PTR_GET_CONST(group_, GetDataServiceGroupResponseBodyGroup) };
    inline GetDataServiceGroupResponseBodyGroup group() { DARABONBA_PTR_GET(group_, GetDataServiceGroupResponseBodyGroup) };
    inline GetDataServiceGroupResponseBody& setGroup(const GetDataServiceGroupResponseBodyGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetDataServiceGroupResponseBody& setGroup(GetDataServiceGroupResponseBodyGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the business process.
    std::shared_ptr<GetDataServiceGroupResponseBodyGroup> group_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
