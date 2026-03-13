// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ComparePlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComparePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompareResult, compareResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ComparePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareResult, compareResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ComparePlaybooksResponseBody() = default ;
    ComparePlaybooksResponseBody(const ComparePlaybooksResponseBody &) = default ;
    ComparePlaybooksResponseBody(ComparePlaybooksResponseBody &&) = default ;
    ComparePlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComparePlaybooksResponseBody() = default ;
    ComparePlaybooksResponseBody& operator=(const ComparePlaybooksResponseBody &) = default ;
    ComparePlaybooksResponseBody& operator=(ComparePlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CompareResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompareResult& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(New, new_);
        DARABONBA_PTR_TO_JSON(Same, same_);
      };
      friend void from_json(const Darabonba::Json& j, CompareResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(New, new_);
        DARABONBA_PTR_FROM_JSON(Same, same_);
      };
      CompareResult() = default ;
      CompareResult(const CompareResult &) = default ;
      CompareResult(CompareResult &&) = default ;
      CompareResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompareResult() = default ;
      CompareResult& operator=(const CompareResult &) = default ;
      CompareResult& operator=(CompareResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->new_ == nullptr && this->same_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CompareResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // new Field Functions 
      bool hasNew() const { return this->new_ != nullptr;};
      void deleteNew() { this->new_ = nullptr;};
      inline bool getNew() const { DARABONBA_PTR_GET_DEFAULT(new_, false) };
      inline CompareResult& setNew(bool _new) { DARABONBA_PTR_SET_VALUE(new_, _new) };


      // same Field Functions 
      bool hasSame() const { return this->same_ != nullptr;};
      void deleteSame() { this->same_ = nullptr;};
      inline bool getSame() const { DARABONBA_PTR_GET_DEFAULT(same_, false) };
      inline CompareResult& setSame(bool same) { DARABONBA_PTR_SET_VALUE(same_, same) };


    protected:
      // The description of the comparison result.
      shared_ptr<string> description_ {};
      // Indicates whether the second version provides more information than the first version. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> new_ {};
      // Indicates whether the configurations of the two versions are the same. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> same_ {};
    };

    virtual bool empty() const override { return this->compareResult_ == nullptr
        && this->requestId_ == nullptr; };
    // compareResult Field Functions 
    bool hasCompareResult() const { return this->compareResult_ != nullptr;};
    void deleteCompareResult() { this->compareResult_ = nullptr;};
    inline const ComparePlaybooksResponseBody::CompareResult & getCompareResult() const { DARABONBA_PTR_GET_CONST(compareResult_, ComparePlaybooksResponseBody::CompareResult) };
    inline ComparePlaybooksResponseBody::CompareResult getCompareResult() { DARABONBA_PTR_GET(compareResult_, ComparePlaybooksResponseBody::CompareResult) };
    inline ComparePlaybooksResponseBody& setCompareResult(const ComparePlaybooksResponseBody::CompareResult & compareResult) { DARABONBA_PTR_SET_VALUE(compareResult_, compareResult) };
    inline ComparePlaybooksResponseBody& setCompareResult(ComparePlaybooksResponseBody::CompareResult && compareResult) { DARABONBA_PTR_SET_RVALUE(compareResult_, compareResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ComparePlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The comparison result.
    shared_ptr<ComparePlaybooksResponseBody::CompareResult> compareResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
