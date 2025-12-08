// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEIMAGEFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERGEIMAGEFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MergeImageFaceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MergeImageFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeImageFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MergeImageFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MergeImageFaceResponseBody() = default ;
    MergeImageFaceResponseBody(const MergeImageFaceResponseBody &) = default ;
    MergeImageFaceResponseBody(MergeImageFaceResponseBody &&) = default ;
    MergeImageFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeImageFaceResponseBody() = default ;
    MergeImageFaceResponseBody& operator=(const MergeImageFaceResponseBody &) = default ;
    MergeImageFaceResponseBody& operator=(MergeImageFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MergeImageFaceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, MergeImageFaceResponseBodyData) };
    inline MergeImageFaceResponseBodyData data() { DARABONBA_PTR_GET(data_, MergeImageFaceResponseBodyData) };
    inline MergeImageFaceResponseBody& setData(const MergeImageFaceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MergeImageFaceResponseBody& setData(MergeImageFaceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MergeImageFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<MergeImageFaceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
