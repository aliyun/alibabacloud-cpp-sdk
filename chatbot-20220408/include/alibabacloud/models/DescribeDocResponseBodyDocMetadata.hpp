// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeDocResponseBodyDocMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocResponseBodyDocMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessViewId, businessViewId_);
      DARABONBA_PTR_TO_JSON(BusinessViewName, businessViewName_);
      DARABONBA_PTR_TO_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocResponseBodyDocMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessViewId, businessViewId_);
      DARABONBA_PTR_FROM_JSON(BusinessViewName, businessViewName_);
      DARABONBA_PTR_FROM_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
    };
    DescribeDocResponseBodyDocMetadata() = default ;
    DescribeDocResponseBodyDocMetadata(const DescribeDocResponseBodyDocMetadata &) = default ;
    DescribeDocResponseBodyDocMetadata(DescribeDocResponseBodyDocMetadata &&) = default ;
    DescribeDocResponseBodyDocMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocResponseBodyDocMetadata() = default ;
    DescribeDocResponseBodyDocMetadata& operator=(const DescribeDocResponseBodyDocMetadata &) = default ;
    DescribeDocResponseBodyDocMetadata& operator=(DescribeDocResponseBodyDocMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessViewId_ == nullptr
        && return this->businessViewName_ == nullptr && return this->metaCellInfoDTOList_ == nullptr; };
    // businessViewId Field Functions 
    bool hasBusinessViewId() const { return this->businessViewId_ != nullptr;};
    void deleteBusinessViewId() { this->businessViewId_ = nullptr;};
    inline string businessViewId() const { DARABONBA_PTR_GET_DEFAULT(businessViewId_, "") };
    inline DescribeDocResponseBodyDocMetadata& setBusinessViewId(string businessViewId) { DARABONBA_PTR_SET_VALUE(businessViewId_, businessViewId) };


    // businessViewName Field Functions 
    bool hasBusinessViewName() const { return this->businessViewName_ != nullptr;};
    void deleteBusinessViewName() { this->businessViewName_ = nullptr;};
    inline string businessViewName() const { DARABONBA_PTR_GET_DEFAULT(businessViewName_, "") };
    inline DescribeDocResponseBodyDocMetadata& setBusinessViewName(string businessViewName) { DARABONBA_PTR_SET_VALUE(businessViewName_, businessViewName) };


    // metaCellInfoDTOList Field Functions 
    bool hasMetaCellInfoDTOList() const { return this->metaCellInfoDTOList_ != nullptr;};
    void deleteMetaCellInfoDTOList() { this->metaCellInfoDTOList_ = nullptr;};
    inline const vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList> & metaCellInfoDTOList() const { DARABONBA_PTR_GET_CONST(metaCellInfoDTOList_, vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList>) };
    inline vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList> metaCellInfoDTOList() { DARABONBA_PTR_GET(metaCellInfoDTOList_, vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList>) };
    inline DescribeDocResponseBodyDocMetadata& setMetaCellInfoDTOList(const vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList> & metaCellInfoDTOList) { DARABONBA_PTR_SET_VALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };
    inline DescribeDocResponseBodyDocMetadata& setMetaCellInfoDTOList(vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList> && metaCellInfoDTOList) { DARABONBA_PTR_SET_RVALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };


  protected:
    std::shared_ptr<string> businessViewId_ = nullptr;
    std::shared_ptr<string> businessViewName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDocResponseBodyDocMetadataMetaCellInfoDTOList>> metaCellInfoDTOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
