// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTFIELDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_IMPORTFIELDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ImportFieldResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportFieldResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(FailFieldNames, failFieldNames_);
      DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ImportFieldResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(FailFieldNames, failFieldNames_);
      DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ImportFieldResponseBodyResultObject() = default ;
    ImportFieldResponseBodyResultObject(const ImportFieldResponseBodyResultObject &) = default ;
    ImportFieldResponseBodyResultObject(ImportFieldResponseBodyResultObject &&) = default ;
    ImportFieldResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportFieldResponseBodyResultObject() = default ;
    ImportFieldResponseBodyResultObject& operator=(const ImportFieldResponseBodyResultObject &) = default ;
    ImportFieldResponseBodyResultObject& operator=(ImportFieldResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failFieldNames_ == nullptr
        && return this->successNum_ == nullptr && return this->totalNum_ == nullptr; };
    // failFieldNames Field Functions 
    bool hasFailFieldNames() const { return this->failFieldNames_ != nullptr;};
    void deleteFailFieldNames() { this->failFieldNames_ = nullptr;};
    inline string failFieldNames() const { DARABONBA_PTR_GET_DEFAULT(failFieldNames_, "") };
    inline ImportFieldResponseBodyResultObject& setFailFieldNames(string failFieldNames) { DARABONBA_PTR_SET_VALUE(failFieldNames_, failFieldNames) };


    // successNum Field Functions 
    bool hasSuccessNum() const { return this->successNum_ != nullptr;};
    void deleteSuccessNum() { this->successNum_ = nullptr;};
    inline int32_t successNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
    inline ImportFieldResponseBodyResultObject& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ImportFieldResponseBodyResultObject& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // Names of fields that failed to upload
    std::shared_ptr<string> failFieldNames_ = nullptr;
    // Number of successful executions.
    std::shared_ptr<int32_t> successNum_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
