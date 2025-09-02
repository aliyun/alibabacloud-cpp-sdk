// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TopTenErrorTimesInstanceResponseBodyInstanceErrorRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenErrorTimesInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenErrorTimesInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenErrorTimesInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TopTenErrorTimesInstanceResponseBody() = default ;
    TopTenErrorTimesInstanceResponseBody(const TopTenErrorTimesInstanceResponseBody &) = default ;
    TopTenErrorTimesInstanceResponseBody(TopTenErrorTimesInstanceResponseBody &&) = default ;
    TopTenErrorTimesInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenErrorTimesInstanceResponseBody() = default ;
    TopTenErrorTimesInstanceResponseBody& operator=(const TopTenErrorTimesInstanceResponseBody &) = default ;
    TopTenErrorTimesInstanceResponseBody& operator=(TopTenErrorTimesInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceErrorRank_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceErrorRank Field Functions 
    bool hasInstanceErrorRank() const { return this->instanceErrorRank_ != nullptr;};
    void deleteInstanceErrorRank() { this->instanceErrorRank_ = nullptr;};
    inline const TopTenErrorTimesInstanceResponseBodyInstanceErrorRank & instanceErrorRank() const { DARABONBA_PTR_GET_CONST(instanceErrorRank_, TopTenErrorTimesInstanceResponseBodyInstanceErrorRank) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRank instanceErrorRank() { DARABONBA_PTR_GET(instanceErrorRank_, TopTenErrorTimesInstanceResponseBodyInstanceErrorRank) };
    inline TopTenErrorTimesInstanceResponseBody& setInstanceErrorRank(const TopTenErrorTimesInstanceResponseBodyInstanceErrorRank & instanceErrorRank) { DARABONBA_PTR_SET_VALUE(instanceErrorRank_, instanceErrorRank) };
    inline TopTenErrorTimesInstanceResponseBody& setInstanceErrorRank(TopTenErrorTimesInstanceResponseBodyInstanceErrorRank && instanceErrorRank) { DARABONBA_PTR_SET_RVALUE(instanceErrorRank_, instanceErrorRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TopTenErrorTimesInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking data of nodes on which errors occurred.
    std::shared_ptr<TopTenErrorTimesInstanceResponseBodyInstanceErrorRank> instanceErrorRank_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
