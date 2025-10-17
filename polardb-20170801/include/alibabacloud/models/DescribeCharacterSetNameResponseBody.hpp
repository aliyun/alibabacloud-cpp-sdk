// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCharacterSetNameResponseBodyCharacterSetNameItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCharacterSetNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCharacterSetNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSetNameItems, characterSetNameItems_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCharacterSetNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSetNameItems, characterSetNameItems_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCharacterSetNameResponseBody() = default ;
    DescribeCharacterSetNameResponseBody(const DescribeCharacterSetNameResponseBody &) = default ;
    DescribeCharacterSetNameResponseBody(DescribeCharacterSetNameResponseBody &&) = default ;
    DescribeCharacterSetNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCharacterSetNameResponseBody() = default ;
    DescribeCharacterSetNameResponseBody& operator=(const DescribeCharacterSetNameResponseBody &) = default ;
    DescribeCharacterSetNameResponseBody& operator=(DescribeCharacterSetNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->characterSetNameItems_ == nullptr
        && return this->engine_ == nullptr && return this->requestId_ == nullptr; };
    // characterSetNameItems Field Functions 
    bool hasCharacterSetNameItems() const { return this->characterSetNameItems_ != nullptr;};
    void deleteCharacterSetNameItems() { this->characterSetNameItems_ = nullptr;};
    inline const DescribeCharacterSetNameResponseBodyCharacterSetNameItems & characterSetNameItems() const { DARABONBA_PTR_GET_CONST(characterSetNameItems_, DescribeCharacterSetNameResponseBodyCharacterSetNameItems) };
    inline DescribeCharacterSetNameResponseBodyCharacterSetNameItems characterSetNameItems() { DARABONBA_PTR_GET(characterSetNameItems_, DescribeCharacterSetNameResponseBodyCharacterSetNameItems) };
    inline DescribeCharacterSetNameResponseBody& setCharacterSetNameItems(const DescribeCharacterSetNameResponseBodyCharacterSetNameItems & characterSetNameItems) { DARABONBA_PTR_SET_VALUE(characterSetNameItems_, characterSetNameItems) };
    inline DescribeCharacterSetNameResponseBody& setCharacterSetNameItems(DescribeCharacterSetNameResponseBodyCharacterSetNameItems && characterSetNameItems) { DARABONBA_PTR_SET_RVALUE(characterSetNameItems_, characterSetNameItems) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeCharacterSetNameResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCharacterSetNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The character sets that are supported.
    std::shared_ptr<DescribeCharacterSetNameResponseBodyCharacterSetNameItems> characterSetNameItems_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
