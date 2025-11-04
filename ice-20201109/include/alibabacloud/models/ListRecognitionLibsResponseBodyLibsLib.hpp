// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODYLIBSLIB_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODYLIBSLIB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionLibsResponseBodyLibsLib : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionLibsResponseBodyLibsLib& obj) { 
      DARABONBA_PTR_TO_JSON(LibDescription, libDescription_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionLibsResponseBodyLibsLib& obj) { 
      DARABONBA_PTR_FROM_JSON(LibDescription, libDescription_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    ListRecognitionLibsResponseBodyLibsLib() = default ;
    ListRecognitionLibsResponseBodyLibsLib(const ListRecognitionLibsResponseBodyLibsLib &) = default ;
    ListRecognitionLibsResponseBodyLibsLib(ListRecognitionLibsResponseBodyLibsLib &&) = default ;
    ListRecognitionLibsResponseBodyLibsLib(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionLibsResponseBodyLibsLib() = default ;
    ListRecognitionLibsResponseBodyLibsLib& operator=(const ListRecognitionLibsResponseBodyLibsLib &) = default ;
    ListRecognitionLibsResponseBodyLibsLib& operator=(ListRecognitionLibsResponseBodyLibsLib &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libDescription_ == nullptr
        && return this->libId_ == nullptr && return this->libName_ == nullptr; };
    // libDescription Field Functions 
    bool hasLibDescription() const { return this->libDescription_ != nullptr;};
    void deleteLibDescription() { this->libDescription_ = nullptr;};
    inline string libDescription() const { DARABONBA_PTR_GET_DEFAULT(libDescription_, "") };
    inline ListRecognitionLibsResponseBodyLibsLib& setLibDescription(string libDescription) { DARABONBA_PTR_SET_VALUE(libDescription_, libDescription) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListRecognitionLibsResponseBodyLibsLib& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ListRecognitionLibsResponseBodyLibsLib& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // The description of the recognition library.
    std::shared_ptr<string> libDescription_ = nullptr;
    // The ID of the recognition library.
    std::shared_ptr<string> libId_ = nullptr;
    // The name of the recognition library.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
