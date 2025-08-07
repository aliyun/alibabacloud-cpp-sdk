// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AddFileResultList, addFileResultList_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AddFileResultList, addFileResultList_);
    };
    AddFilesFromAuthorizedOssResponseBodyData() = default ;
    AddFilesFromAuthorizedOssResponseBodyData(const AddFilesFromAuthorizedOssResponseBodyData &) = default ;
    AddFilesFromAuthorizedOssResponseBodyData(AddFilesFromAuthorizedOssResponseBodyData &&) = default ;
    AddFilesFromAuthorizedOssResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssResponseBodyData() = default ;
    AddFilesFromAuthorizedOssResponseBodyData& operator=(const AddFilesFromAuthorizedOssResponseBodyData &) = default ;
    AddFilesFromAuthorizedOssResponseBodyData& operator=(AddFilesFromAuthorizedOssResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addFileResultList_ != nullptr; };
    // addFileResultList Field Functions 
    bool hasAddFileResultList() const { return this->addFileResultList_ != nullptr;};
    void deleteAddFileResultList() { this->addFileResultList_ = nullptr;};
    inline const vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList> & addFileResultList() const { DARABONBA_PTR_GET_CONST(addFileResultList_, vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList>) };
    inline vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList> addFileResultList() { DARABONBA_PTR_GET(addFileResultList_, vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList>) };
    inline AddFilesFromAuthorizedOssResponseBodyData& setAddFileResultList(const vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList> & addFileResultList) { DARABONBA_PTR_SET_VALUE(addFileResultList_, addFileResultList) };
    inline AddFilesFromAuthorizedOssResponseBodyData& setAddFileResultList(vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList> && addFileResultList) { DARABONBA_PTR_SET_RVALUE(addFileResultList_, addFileResultList) };


  protected:
    std::shared_ptr<vector<Models::AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList>> addFileResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
