// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEVLREALTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEVLREALTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AnalyzeVlRealtimeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AnalyzeVlRealtimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeVlRealtimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeVlRealtimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AnalyzeVlRealtimeResponseBody() = default ;
    AnalyzeVlRealtimeResponseBody(const AnalyzeVlRealtimeResponseBody &) = default ;
    AnalyzeVlRealtimeResponseBody(AnalyzeVlRealtimeResponseBody &&) = default ;
    AnalyzeVlRealtimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeVlRealtimeResponseBody() = default ;
    AnalyzeVlRealtimeResponseBody& operator=(const AnalyzeVlRealtimeResponseBody &) = default ;
    AnalyzeVlRealtimeResponseBody& operator=(AnalyzeVlRealtimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AnalyzeVlRealtimeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AnalyzeVlRealtimeResponseBodyData) };
    inline AnalyzeVlRealtimeResponseBodyData data() { DARABONBA_PTR_GET(data_, AnalyzeVlRealtimeResponseBodyData) };
    inline AnalyzeVlRealtimeResponseBody& setData(const AnalyzeVlRealtimeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AnalyzeVlRealtimeResponseBody& setData(AnalyzeVlRealtimeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnalyzeVlRealtimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return result.
    std::shared_ptr<AnalyzeVlRealtimeResponseBodyData> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
