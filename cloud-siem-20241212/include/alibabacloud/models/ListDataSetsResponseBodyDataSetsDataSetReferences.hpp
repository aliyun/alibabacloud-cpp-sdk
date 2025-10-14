// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATASETSDATASETREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATASETSDATASETREFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSetsResponseBodyDataSetsDataSetReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetsResponseBodyDataSetsDataSetReferences& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetReferenceId, dataSetReferenceId_);
      DARABONBA_PTR_TO_JSON(DataSetReferenceName, dataSetReferenceName_);
      DARABONBA_PTR_TO_JSON(DataSetReferenceType, dataSetReferenceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetsResponseBodyDataSetsDataSetReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetReferenceId, dataSetReferenceId_);
      DARABONBA_PTR_FROM_JSON(DataSetReferenceName, dataSetReferenceName_);
      DARABONBA_PTR_FROM_JSON(DataSetReferenceType, dataSetReferenceType_);
    };
    ListDataSetsResponseBodyDataSetsDataSetReferences() = default ;
    ListDataSetsResponseBodyDataSetsDataSetReferences(const ListDataSetsResponseBodyDataSetsDataSetReferences &) = default ;
    ListDataSetsResponseBodyDataSetsDataSetReferences(ListDataSetsResponseBodyDataSetsDataSetReferences &&) = default ;
    ListDataSetsResponseBodyDataSetsDataSetReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetsResponseBodyDataSetsDataSetReferences() = default ;
    ListDataSetsResponseBodyDataSetsDataSetReferences& operator=(const ListDataSetsResponseBodyDataSetsDataSetReferences &) = default ;
    ListDataSetsResponseBodyDataSetsDataSetReferences& operator=(ListDataSetsResponseBodyDataSetsDataSetReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetId_ == nullptr
        && return this->dataSetReferenceId_ == nullptr && return this->dataSetReferenceName_ == nullptr && return this->dataSetReferenceType_ == nullptr; };
    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline ListDataSetsResponseBodyDataSetsDataSetReferences& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetReferenceId Field Functions 
    bool hasDataSetReferenceId() const { return this->dataSetReferenceId_ != nullptr;};
    void deleteDataSetReferenceId() { this->dataSetReferenceId_ = nullptr;};
    inline string dataSetReferenceId() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceId_, "") };
    inline ListDataSetsResponseBodyDataSetsDataSetReferences& setDataSetReferenceId(string dataSetReferenceId) { DARABONBA_PTR_SET_VALUE(dataSetReferenceId_, dataSetReferenceId) };


    // dataSetReferenceName Field Functions 
    bool hasDataSetReferenceName() const { return this->dataSetReferenceName_ != nullptr;};
    void deleteDataSetReferenceName() { this->dataSetReferenceName_ = nullptr;};
    inline string dataSetReferenceName() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceName_, "") };
    inline ListDataSetsResponseBodyDataSetsDataSetReferences& setDataSetReferenceName(string dataSetReferenceName) { DARABONBA_PTR_SET_VALUE(dataSetReferenceName_, dataSetReferenceName) };


    // dataSetReferenceType Field Functions 
    bool hasDataSetReferenceType() const { return this->dataSetReferenceType_ != nullptr;};
    void deleteDataSetReferenceType() { this->dataSetReferenceType_ = nullptr;};
    inline string dataSetReferenceType() const { DARABONBA_PTR_GET_DEFAULT(dataSetReferenceType_, "") };
    inline ListDataSetsResponseBodyDataSetsDataSetReferences& setDataSetReferenceType(string dataSetReferenceType) { DARABONBA_PTR_SET_VALUE(dataSetReferenceType_, dataSetReferenceType) };


  protected:
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetReferenceId_ = nullptr;
    std::shared_ptr<string> dataSetReferenceName_ = nullptr;
    std::shared_ptr<string> dataSetReferenceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
