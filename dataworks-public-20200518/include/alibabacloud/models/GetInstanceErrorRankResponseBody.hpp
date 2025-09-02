// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceErrorRankResponseBodyInstanceErrorRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceErrorRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceErrorRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceErrorRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceErrorRankResponseBody() = default ;
    GetInstanceErrorRankResponseBody(const GetInstanceErrorRankResponseBody &) = default ;
    GetInstanceErrorRankResponseBody(GetInstanceErrorRankResponseBody &&) = default ;
    GetInstanceErrorRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceErrorRankResponseBody() = default ;
    GetInstanceErrorRankResponseBody& operator=(const GetInstanceErrorRankResponseBody &) = default ;
    GetInstanceErrorRankResponseBody& operator=(GetInstanceErrorRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceErrorRank_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceErrorRank Field Functions 
    bool hasInstanceErrorRank() const { return this->instanceErrorRank_ != nullptr;};
    void deleteInstanceErrorRank() { this->instanceErrorRank_ = nullptr;};
    inline const GetInstanceErrorRankResponseBodyInstanceErrorRank & instanceErrorRank() const { DARABONBA_PTR_GET_CONST(instanceErrorRank_, GetInstanceErrorRankResponseBodyInstanceErrorRank) };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRank instanceErrorRank() { DARABONBA_PTR_GET(instanceErrorRank_, GetInstanceErrorRankResponseBodyInstanceErrorRank) };
    inline GetInstanceErrorRankResponseBody& setInstanceErrorRank(const GetInstanceErrorRankResponseBodyInstanceErrorRank & instanceErrorRank) { DARABONBA_PTR_SET_VALUE(instanceErrorRank_, instanceErrorRank) };
    inline GetInstanceErrorRankResponseBody& setInstanceErrorRank(GetInstanceErrorRankResponseBodyInstanceErrorRank && instanceErrorRank) { DARABONBA_PTR_SET_RVALUE(instanceErrorRank_, instanceErrorRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceErrorRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking data of nodes on which errors occurred.
    std::shared_ptr<GetInstanceErrorRankResponseBodyInstanceErrorRank> instanceErrorRank_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
