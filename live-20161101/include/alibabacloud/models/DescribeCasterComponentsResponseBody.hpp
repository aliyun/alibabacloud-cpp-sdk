// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterComponentsResponseBody() = default ;
    DescribeCasterComponentsResponseBody(const DescribeCasterComponentsResponseBody &) = default ;
    DescribeCasterComponentsResponseBody(DescribeCasterComponentsResponseBody &&) = default ;
    DescribeCasterComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBody() = default ;
    DescribeCasterComponentsResponseBody& operator=(const DescribeCasterComponentsResponseBody &) = default ;
    DescribeCasterComponentsResponseBody& operator=(DescribeCasterComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->components_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const DescribeCasterComponentsResponseBodyComponents & components() const { DARABONBA_PTR_GET_CONST(components_, DescribeCasterComponentsResponseBodyComponents) };
    inline DescribeCasterComponentsResponseBodyComponents components() { DARABONBA_PTR_GET(components_, DescribeCasterComponentsResponseBodyComponents) };
    inline DescribeCasterComponentsResponseBody& setComponents(const DescribeCasterComponentsResponseBodyComponents & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeCasterComponentsResponseBody& setComponents(DescribeCasterComponentsResponseBodyComponents && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterComponentsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The components.
    std::shared_ptr<DescribeCasterComponentsResponseBodyComponents> components_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
