// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEHUMANANIMESTYLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateHumanAnimeStyleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GenerateHumanAnimeStyleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateHumanAnimeStyleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateHumanAnimeStyleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateHumanAnimeStyleResponseBody() = default ;
    GenerateHumanAnimeStyleResponseBody(const GenerateHumanAnimeStyleResponseBody &) = default ;
    GenerateHumanAnimeStyleResponseBody(GenerateHumanAnimeStyleResponseBody &&) = default ;
    GenerateHumanAnimeStyleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateHumanAnimeStyleResponseBody() = default ;
    GenerateHumanAnimeStyleResponseBody& operator=(const GenerateHumanAnimeStyleResponseBody &) = default ;
    GenerateHumanAnimeStyleResponseBody& operator=(GenerateHumanAnimeStyleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateHumanAnimeStyleResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GenerateHumanAnimeStyleResponseBodyData) };
    inline GenerateHumanAnimeStyleResponseBodyData data() { DARABONBA_PTR_GET(data_, GenerateHumanAnimeStyleResponseBodyData) };
    inline GenerateHumanAnimeStyleResponseBody& setData(const GenerateHumanAnimeStyleResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateHumanAnimeStyleResponseBody& setData(GenerateHumanAnimeStyleResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateHumanAnimeStyleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GenerateHumanAnimeStyleResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
