// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILECHECKRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILECHECKRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UploadFileCheckResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileCheckResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(effectiveNumber, effectiveNumber_);
      DARABONBA_PTR_TO_JSON(resultList, resultList_);
      DARABONBA_PTR_TO_JSON(totalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileCheckResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(effectiveNumber, effectiveNumber_);
      DARABONBA_PTR_FROM_JSON(resultList, resultList_);
      DARABONBA_PTR_FROM_JSON(totalNumber, totalNumber_);
    };
    UploadFileCheckResponseBodyResultObject() = default ;
    UploadFileCheckResponseBodyResultObject(const UploadFileCheckResponseBodyResultObject &) = default ;
    UploadFileCheckResponseBodyResultObject(UploadFileCheckResponseBodyResultObject &&) = default ;
    UploadFileCheckResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileCheckResponseBodyResultObject() = default ;
    UploadFileCheckResponseBodyResultObject& operator=(const UploadFileCheckResponseBodyResultObject &) = default ;
    UploadFileCheckResponseBodyResultObject& operator=(UploadFileCheckResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveNumber_ == nullptr
        && return this->resultList_ == nullptr && return this->totalNumber_ == nullptr; };
    // effectiveNumber Field Functions 
    bool hasEffectiveNumber() const { return this->effectiveNumber_ != nullptr;};
    void deleteEffectiveNumber() { this->effectiveNumber_ = nullptr;};
    inline int32_t effectiveNumber() const { DARABONBA_PTR_GET_DEFAULT(effectiveNumber_, 0) };
    inline UploadFileCheckResponseBodyResultObject& setEffectiveNumber(int32_t effectiveNumber) { DARABONBA_PTR_SET_VALUE(effectiveNumber_, effectiveNumber) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<string> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<string>) };
    inline vector<string> resultList() { DARABONBA_PTR_GET(resultList_, vector<string>) };
    inline UploadFileCheckResponseBodyResultObject& setResultList(const vector<string> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline UploadFileCheckResponseBodyResultObject& setResultList(vector<string> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline UploadFileCheckResponseBodyResultObject& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    // Number of effective rows
    std::shared_ptr<int32_t> effectiveNumber_ = nullptr;
    // Valid sample data
    std::shared_ptr<vector<string>> resultList_ = nullptr;
    // Total number of rows
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
