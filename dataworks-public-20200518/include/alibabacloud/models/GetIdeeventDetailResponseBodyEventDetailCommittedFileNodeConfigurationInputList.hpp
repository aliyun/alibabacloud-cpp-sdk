// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILENODECONFIGURATIONINPUTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILCOMMITTEDFILENODECONFIGURATIONINPUTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(ParseType, parseType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(ParseType, parseType_);
    };
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList(const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList(GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList() = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& operator=(const GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList &) = default ;
    GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& operator=(GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->parseType_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // parseType Field Functions 
    bool hasParseType() const { return this->parseType_ != nullptr;};
    void deleteParseType() { this->parseType_ = nullptr;};
    inline string parseType() const { DARABONBA_PTR_GET_DEFAULT(parseType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailCommittedFileNodeConfigurationInputList& setParseType(string parseType) { DARABONBA_PTR_SET_VALUE(parseType_, parseType) };


  protected:
    // The output name of the parent file on which the current file depends.
    // 
    // This parameter corresponds to the Output Name of Ancestor Node parameter under Parent Nodes in the Dependencies section of the Properties tab in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<string> input_ = nullptr;
    // The mode of the configuration file dependency. Valid values:
    // 
    // *   MANUAL: Scheduling dependencies are manually configured.
    // *   AUTO: Scheduling dependencies are automatically parsed.
    std::shared_ptr<string> parseType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
