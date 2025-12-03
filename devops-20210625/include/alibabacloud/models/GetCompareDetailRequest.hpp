// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPAREDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPAREDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCompareDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompareDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(maxDiffByte, maxDiffByte_);
      DARABONBA_PTR_TO_JSON(maxDiffFile, maxDiffFile_);
      DARABONBA_PTR_TO_JSON(mergeBase, mergeBase_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompareDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(maxDiffByte, maxDiffByte_);
      DARABONBA_PTR_FROM_JSON(maxDiffFile, maxDiffFile_);
      DARABONBA_PTR_FROM_JSON(mergeBase, mergeBase_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetCompareDetailRequest() = default ;
    GetCompareDetailRequest(const GetCompareDetailRequest &) = default ;
    GetCompareDetailRequest(GetCompareDetailRequest &&) = default ;
    GetCompareDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompareDetailRequest() = default ;
    GetCompareDetailRequest& operator=(const GetCompareDetailRequest &) = default ;
    GetCompareDetailRequest& operator=(GetCompareDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->maxDiffByte_ == nullptr && return this->maxDiffFile_ == nullptr && return this->mergeBase_ == nullptr && return this->organizationId_ == nullptr && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetCompareDetailRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // maxDiffByte Field Functions 
    bool hasMaxDiffByte() const { return this->maxDiffByte_ != nullptr;};
    void deleteMaxDiffByte() { this->maxDiffByte_ = nullptr;};
    inline int32_t maxDiffByte() const { DARABONBA_PTR_GET_DEFAULT(maxDiffByte_, 0) };
    inline GetCompareDetailRequest& setMaxDiffByte(int32_t maxDiffByte) { DARABONBA_PTR_SET_VALUE(maxDiffByte_, maxDiffByte) };


    // maxDiffFile Field Functions 
    bool hasMaxDiffFile() const { return this->maxDiffFile_ != nullptr;};
    void deleteMaxDiffFile() { this->maxDiffFile_ = nullptr;};
    inline int32_t maxDiffFile() const { DARABONBA_PTR_GET_DEFAULT(maxDiffFile_, 0) };
    inline GetCompareDetailRequest& setMaxDiffFile(int32_t maxDiffFile) { DARABONBA_PTR_SET_VALUE(maxDiffFile_, maxDiffFile) };


    // mergeBase Field Functions 
    bool hasMergeBase() const { return this->mergeBase_ != nullptr;};
    void deleteMergeBase() { this->mergeBase_ = nullptr;};
    inline bool mergeBase() const { DARABONBA_PTR_GET_DEFAULT(mergeBase_, false) };
    inline GetCompareDetailRequest& setMergeBase(bool mergeBase) { DARABONBA_PTR_SET_VALUE(mergeBase_, mergeBase) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetCompareDetailRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline GetCompareDetailRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<int32_t> maxDiffByte_ = nullptr;
    std::shared_ptr<int32_t> maxDiffFile_ = nullptr;
    std::shared_ptr<bool> mergeBase_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
