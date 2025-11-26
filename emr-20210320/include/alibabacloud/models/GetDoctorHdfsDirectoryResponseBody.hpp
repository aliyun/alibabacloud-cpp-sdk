// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHDFSDirectoryResponseBody() = default ;
    GetDoctorHDFSDirectoryResponseBody(const GetDoctorHDFSDirectoryResponseBody &) = default ;
    GetDoctorHDFSDirectoryResponseBody(GetDoctorHDFSDirectoryResponseBody &&) = default ;
    GetDoctorHDFSDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSDirectoryResponseBody() = default ;
    GetDoctorHDFSDirectoryResponseBody& operator=(const GetDoctorHDFSDirectoryResponseBody &) = default ;
    GetDoctorHDFSDirectoryResponseBody& operator=(GetDoctorHDFSDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHDFSDirectoryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHDFSDirectoryResponseBodyData) };
    inline GetDoctorHDFSDirectoryResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDoctorHDFSDirectoryResponseBodyData) };
    inline GetDoctorHDFSDirectoryResponseBody& setData(const GetDoctorHDFSDirectoryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHDFSDirectoryResponseBody& setData(GetDoctorHDFSDirectoryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHDFSDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The analysis results of the HDFS directory.
    std::shared_ptr<GetDoctorHDFSDirectoryResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
