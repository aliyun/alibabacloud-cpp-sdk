// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEOUTPUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEOUTPUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeOutputsResponseBodyOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListNodeOutputsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeOutputsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeOutputsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodeOutputsResponseBody() = default ;
    ListNodeOutputsResponseBody(const ListNodeOutputsResponseBody &) = default ;
    ListNodeOutputsResponseBody(ListNodeOutputsResponseBody &&) = default ;
    ListNodeOutputsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeOutputsResponseBody() = default ;
    ListNodeOutputsResponseBody& operator=(const ListNodeOutputsResponseBody &) = default ;
    ListNodeOutputsResponseBody& operator=(ListNodeOutputsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputs_ == nullptr
        && return this->requestId_ == nullptr; };
    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<ListNodeOutputsResponseBodyOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<ListNodeOutputsResponseBodyOutputs>) };
    inline vector<ListNodeOutputsResponseBodyOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<ListNodeOutputsResponseBodyOutputs>) };
    inline ListNodeOutputsResponseBody& setOutputs(const vector<ListNodeOutputsResponseBodyOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ListNodeOutputsResponseBody& setOutputs(vector<ListNodeOutputsResponseBodyOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeOutputsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListNodeOutputsResponseBodyOutputs>> outputs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
