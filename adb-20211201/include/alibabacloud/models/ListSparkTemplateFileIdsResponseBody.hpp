// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKTEMPLATEFILEIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKTEMPLATEFILEIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkTemplateFileIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkTemplateFileIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkTemplateFileIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSparkTemplateFileIdsResponseBody() = default ;
    ListSparkTemplateFileIdsResponseBody(const ListSparkTemplateFileIdsResponseBody &) = default ;
    ListSparkTemplateFileIdsResponseBody(ListSparkTemplateFileIdsResponseBody &&) = default ;
    ListSparkTemplateFileIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkTemplateFileIdsResponseBody() = default ;
    ListSparkTemplateFileIdsResponseBody& operator=(const ListSparkTemplateFileIdsResponseBody &) = default ;
    ListSparkTemplateFileIdsResponseBody& operator=(ListSparkTemplateFileIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<int64_t> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
    inline vector<int64_t> data() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
    inline ListSparkTemplateFileIdsResponseBody& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSparkTemplateFileIdsResponseBody& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSparkTemplateFileIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of Spark template files.
    std::shared_ptr<vector<int64_t>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
