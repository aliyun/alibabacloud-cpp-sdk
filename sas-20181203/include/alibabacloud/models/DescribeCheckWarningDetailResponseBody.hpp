// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(CheckDetailAssetInfo, checkDetailAssetInfo_);
      DARABONBA_PTR_TO_JSON(CheckDetailColumns, checkDetailColumns_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(CheckDetailAssetInfo, checkDetailAssetInfo_);
      DARABONBA_PTR_FROM_JSON(CheckDetailColumns, checkDetailColumns_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCheckWarningDetailResponseBody() = default ;
    DescribeCheckWarningDetailResponseBody(const DescribeCheckWarningDetailResponseBody &) = default ;
    DescribeCheckWarningDetailResponseBody(DescribeCheckWarningDetailResponseBody &&) = default ;
    DescribeCheckWarningDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningDetailResponseBody() = default ;
    DescribeCheckWarningDetailResponseBody& operator=(const DescribeCheckWarningDetailResponseBody &) = default ;
    DescribeCheckWarningDetailResponseBody& operator=(DescribeCheckWarningDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckDetailColumns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckDetailColumns& obj) { 
        DARABONBA_PTR_TO_JSON(Grids, grids_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckDetailColumns& obj) { 
        DARABONBA_PTR_FROM_JSON(Grids, grids_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CheckDetailColumns() = default ;
      CheckDetailColumns(const CheckDetailColumns &) = default ;
      CheckDetailColumns(CheckDetailColumns &&) = default ;
      CheckDetailColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckDetailColumns() = default ;
      CheckDetailColumns& operator=(const CheckDetailColumns &) = default ;
      CheckDetailColumns& operator=(CheckDetailColumns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Grids : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grids& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Grids& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Grids() = default ;
        Grids(const Grids &) = default ;
        Grids(Grids &&) = default ;
        Grids(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grids() = default ;
        Grids& operator=(const Grids &) = default ;
        Grids& operator=(Grids &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->showName_ == nullptr && this->type_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Grids& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline Grids& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Grids& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Key to detect content.
        shared_ptr<string> key_ {};
        // The detection content key corresponds to the display name.
        shared_ptr<string> showName_ {};
        // Display type. Value:
        // - **grid**: Detection grid
        // - **text**: text
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->grids_ == nullptr
        && this->key_ == nullptr && this->showName_ == nullptr && this->type_ == nullptr; };
      // grids Field Functions 
      bool hasGrids() const { return this->grids_ != nullptr;};
      void deleteGrids() { this->grids_ = nullptr;};
      inline const vector<CheckDetailColumns::Grids> & getGrids() const { DARABONBA_PTR_GET_CONST(grids_, vector<CheckDetailColumns::Grids>) };
      inline vector<CheckDetailColumns::Grids> getGrids() { DARABONBA_PTR_GET(grids_, vector<CheckDetailColumns::Grids>) };
      inline CheckDetailColumns& setGrids(const vector<CheckDetailColumns::Grids> & grids) { DARABONBA_PTR_SET_VALUE(grids_, grids) };
      inline CheckDetailColumns& setGrids(vector<CheckDetailColumns::Grids> && grids) { DARABONBA_PTR_SET_RVALUE(grids_, grids) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline CheckDetailColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline CheckDetailColumns& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckDetailColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Detection content list.
      shared_ptr<vector<CheckDetailColumns::Grids>> grids_ {};
      // Key to detect content.
      shared_ptr<string> key_ {};
      // The detection content key corresponds to the display name.
      shared_ptr<string> showName_ {};
      // Display type. Value:
      // - **grid**: Detection grid
      // - **text**: text
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->advice_ == nullptr
        && this->checkDetailAssetInfo_ == nullptr && this->checkDetailColumns_ == nullptr && this->checkId_ == nullptr && this->description_ == nullptr && this->item_ == nullptr
        && this->level_ == nullptr && this->prompt_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string getAdvice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline DescribeCheckWarningDetailResponseBody& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // checkDetailAssetInfo Field Functions 
    bool hasCheckDetailAssetInfo() const { return this->checkDetailAssetInfo_ != nullptr;};
    void deleteCheckDetailAssetInfo() { this->checkDetailAssetInfo_ = nullptr;};
    inline const vector<map<string, string>> & getCheckDetailAssetInfo() const { DARABONBA_PTR_GET_CONST(checkDetailAssetInfo_, vector<map<string, string>>) };
    inline vector<map<string, string>> getCheckDetailAssetInfo() { DARABONBA_PTR_GET(checkDetailAssetInfo_, vector<map<string, string>>) };
    inline DescribeCheckWarningDetailResponseBody& setCheckDetailAssetInfo(const vector<map<string, string>> & checkDetailAssetInfo) { DARABONBA_PTR_SET_VALUE(checkDetailAssetInfo_, checkDetailAssetInfo) };
    inline DescribeCheckWarningDetailResponseBody& setCheckDetailAssetInfo(vector<map<string, string>> && checkDetailAssetInfo) { DARABONBA_PTR_SET_RVALUE(checkDetailAssetInfo_, checkDetailAssetInfo) };


    // checkDetailColumns Field Functions 
    bool hasCheckDetailColumns() const { return this->checkDetailColumns_ != nullptr;};
    void deleteCheckDetailColumns() { this->checkDetailColumns_ = nullptr;};
    inline const vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns> & getCheckDetailColumns() const { DARABONBA_PTR_GET_CONST(checkDetailColumns_, vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns>) };
    inline vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns> getCheckDetailColumns() { DARABONBA_PTR_GET(checkDetailColumns_, vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns>) };
    inline DescribeCheckWarningDetailResponseBody& setCheckDetailColumns(const vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns> & checkDetailColumns) { DARABONBA_PTR_SET_VALUE(checkDetailColumns_, checkDetailColumns) };
    inline DescribeCheckWarningDetailResponseBody& setCheckDetailColumns(vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns> && checkDetailColumns) { DARABONBA_PTR_SET_RVALUE(checkDetailColumns_, checkDetailColumns) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeCheckWarningDetailResponseBody& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCheckWarningDetailResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeCheckWarningDetailResponseBody& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeCheckWarningDetailResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeCheckWarningDetailResponseBody& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckWarningDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCheckWarningDetailResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The suggestion for the management of the risk item.
    shared_ptr<string> advice_ {};
    // List of asset details to check.
    shared_ptr<vector<map<string, string>>> checkDetailAssetInfo_ {};
    // Detection content details.
    shared_ptr<vector<DescribeCheckWarningDetailResponseBody::CheckDetailColumns>> checkDetailColumns_ {};
    // The ID of the check item.
    shared_ptr<int64_t> checkId_ {};
    // The additional information about the risk item.
    shared_ptr<string> description_ {};
    // The name of the check item.
    shared_ptr<string> item_ {};
    // The risk level of the check item. Valid values:
    // 
    // *   **high**: The item is a high-risk item and is highlighted in red.
    // *   **medium**: The item is a medium-risk item and is highlighted in orange.
    // *   **low**: The item is a low-risk item and is highlighted in gray.
    shared_ptr<string> level_ {};
    // The prompt for the risk item.
    shared_ptr<string> prompt_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The type of the check item. Valid values:
    // 
    // *   **hc_exploit**: unauthorized access
    // *   **hc_djbh**: classified protection compliance
    // *   **hc_best_secruity**: best security practice
    // *   **hc_container**: container security
    // *   **hc_custom**: custom baseline
    // *   **cis**: Center for Internet Security (CIS) compliance
    // *   **weak_password**: weak password
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
