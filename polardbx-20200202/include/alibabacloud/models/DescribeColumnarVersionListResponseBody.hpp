// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarVersionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarVersionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarVersionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColumnarVersionListResponseBody() = default ;
    DescribeColumnarVersionListResponseBody(const DescribeColumnarVersionListResponseBody &) = default ;
    DescribeColumnarVersionListResponseBody(DescribeColumnarVersionListResponseBody &&) = default ;
    DescribeColumnarVersionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarVersionListResponseBody() = default ;
    DescribeColumnarVersionListResponseBody& operator=(const DescribeColumnarVersionListResponseBody &) = default ;
    DescribeColumnarVersionListResponseBody& operator=(DescribeColumnarVersionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(VersionList, versionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(VersionList, versionList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->versionList_ == nullptr; };
      // versionList Field Functions 
      bool hasVersionList() const { return this->versionList_ != nullptr;};
      void deleteVersionList() { this->versionList_ = nullptr;};
      inline const vector<string> & getVersionList() const { DARABONBA_PTR_GET_CONST(versionList_, vector<string>) };
      inline vector<string> getVersionList() { DARABONBA_PTR_GET(versionList_, vector<string>) };
      inline Data& setVersionList(const vector<string> & versionList) { DARABONBA_PTR_SET_VALUE(versionList_, versionList) };
      inline Data& setVersionList(vector<string> && versionList) { DARABONBA_PTR_SET_RVALUE(versionList_, versionList) };


    protected:
      shared_ptr<vector<string>> versionList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeColumnarVersionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeColumnarVersionListResponseBody::Data) };
    inline DescribeColumnarVersionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeColumnarVersionListResponseBody::Data) };
    inline DescribeColumnarVersionListResponseBody& setData(const DescribeColumnarVersionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeColumnarVersionListResponseBody& setData(DescribeColumnarVersionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnarVersionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeColumnarVersionListResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
