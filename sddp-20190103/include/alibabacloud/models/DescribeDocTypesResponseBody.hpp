// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDocTypesResponseBodyDocTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDocTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDocTypesResponseBody() = default ;
    DescribeDocTypesResponseBody(const DescribeDocTypesResponseBody &) = default ;
    DescribeDocTypesResponseBody(DescribeDocTypesResponseBody &&) = default ;
    DescribeDocTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocTypesResponseBody() = default ;
    DescribeDocTypesResponseBody& operator=(const DescribeDocTypesResponseBody &) = default ;
    DescribeDocTypesResponseBody& operator=(DescribeDocTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docTypeList_ == nullptr
        && return this->requestId_ == nullptr; };
    // docTypeList Field Functions 
    bool hasDocTypeList() const { return this->docTypeList_ != nullptr;};
    void deleteDocTypeList() { this->docTypeList_ = nullptr;};
    inline const vector<DescribeDocTypesResponseBodyDocTypeList> & docTypeList() const { DARABONBA_PTR_GET_CONST(docTypeList_, vector<DescribeDocTypesResponseBodyDocTypeList>) };
    inline vector<DescribeDocTypesResponseBodyDocTypeList> docTypeList() { DARABONBA_PTR_GET(docTypeList_, vector<DescribeDocTypesResponseBodyDocTypeList>) };
    inline DescribeDocTypesResponseBody& setDocTypeList(const vector<DescribeDocTypesResponseBodyDocTypeList> & docTypeList) { DARABONBA_PTR_SET_VALUE(docTypeList_, docTypeList) };
    inline DescribeDocTypesResponseBody& setDocTypeList(vector<DescribeDocTypesResponseBodyDocTypeList> && docTypeList) { DARABONBA_PTR_SET_RVALUE(docTypeList_, docTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of OSS object types.
    std::shared_ptr<vector<DescribeDocTypesResponseBodyDocTypeList>> docTypeList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
