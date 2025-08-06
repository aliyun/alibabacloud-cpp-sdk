// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAISTATISTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAISTATISTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIStatisTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIStatisTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIStatisTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    ListAIStatisTypeResponseBody() = default ;
    ListAIStatisTypeResponseBody(const ListAIStatisTypeResponseBody &) = default ;
    ListAIStatisTypeResponseBody(ListAIStatisTypeResponseBody &&) = default ;
    ListAIStatisTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIStatisTypeResponseBody() = default ;
    ListAIStatisTypeResponseBody& operator=(const ListAIStatisTypeResponseBody &) = default ;
    ListAIStatisTypeResponseBody& operator=(ListAIStatisTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->types_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIStatisTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string types() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ListAIStatisTypeResponseBody& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
